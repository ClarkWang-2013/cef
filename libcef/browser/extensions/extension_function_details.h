// Copyright 2017 the Chromium Embedded Framework Authors. Portions copyright
// 2014 The Chromium Authors. All rights reserved. Use of this source code is
// governed by a BSD-style license that can be found in the LICENSE file.

#ifndef CEF_LIBCEF_BROWSER_EXTENSIONS_EXTENSION_FUNCTION_DETAILS_H_
#define CEF_LIBCEF_BROWSER_EXTENSIONS_EXTENSION_FUNCTION_DETAILS_H_

#include "libcef/browser/browser_host_impl.h"

#include "include/cef_extension.h"

#include "base/callback_forward.h"
#include "base/macros.h"
#include "ui/gfx/native_widget_types.h"

class Profile;
class UIThreadExtensionFunction;

namespace content {
class WebContents;
}

namespace extensions {

// Provides CEF-specific details to UIThreadExtensionFunction implementations.
// Based on chrome/browser/extensions/chrome_extension_function_details.h.
class CefExtensionFunctionDetails {
 public:
  // Constructs a new ChromeExtensionFunctionDetails instance for |function|.
  // This instance does not own |function| and must outlive it.
  explicit CefExtensionFunctionDetails(UIThreadExtensionFunction* function);
  ~CefExtensionFunctionDetails();

  Profile* GetProfile() const;

  // Get the "sender" browser that is hosting the extension. May return NULL
  // during startup/shutdown.
  CefRefPtr<CefBrowserHostImpl> GetSenderBrowser() const;

  // Get the "current" browser that will be acted on by this extension function,
  // if any. When mapping from a tabId use the GetBrowserForTabId* methods
  // instead of calling this method directly.
  //
  // Many extension APIs operate relative to the browser that the calling code
  // is running inside of. For example, popups and tabs all have a containing
  // browser, but background pages and notification bubbles do not. Other APIs,
  // like chrome.tabs.*, can act on either a specific browser (specified via the
  // tabId parameter) or should allow the client to determine the most
  // appropriate browser (for example, the browser that representing the
  // foreground window).
  //
  // Incognito browsers should not be considered unless the calling extension
  // has incognito access enabled. CEF does not internally enforce incognito
  // status so we pass this flag to client callbacks for consideration.
  //
  // This method can return NULL if there is no matching browser, which can
  // happen if only incognito windows are open, or early in startup or shutdown
  // shutdown when there are no active windows.
  CefRefPtr<CefBrowserHostImpl> GetCurrentBrowser() const;

  // Returns true if the sender browser can access |target|. When mapping from a
  // tabId use the GetBrowserForTabId* methods instead of calling this method
  // directly.
  bool CanAccessBrowser(CefRefPtr<CefBrowserHostImpl> target) const;

  // Returns the browser matching |tab_id| or NULL if the browser cannot be
  // found or does not have a WebContents. If |tab_id| is -1 the "current"
  // browser will be returned. |error_message| can optionally be passed in and
  // will be set with an appropriate message on error. This method should only
  // be called one time per extension function and will check all necessary
  // client permissions.
  CefRefPtr<CefBrowserHostImpl> GetBrowserForTabIdFirstTime(
      int tab_id,
      std::string* error_message) const;

  // Returns the browser matching |tab_id| or NULL if the browser cannot be
  // found or does not have a WebContents. |tab_id| must be >= 0.
  // |error_message| can optionally be passed in and will be set with an
  // appropriate message on error. This method should be called only after
  // GetBrowserForTabIdFirstTime() has succeeded for the same |tab_id|.
  CefRefPtr<CefBrowserHostImpl> GetBrowserForTabIdAgain(
      int tab_id,
      std::string* error_message) const;

  // Give the client a chance to handle |file|. |callback| will be executed
  // once the file contents have been loaded. Returns false if the file is
  // unhandled.
  using LoadFileCallback =
      base::OnceCallback<void(std::unique_ptr<std::string>)>;
  bool LoadFile(const std::string& file, LoadFileCallback callback) const;

  // Returns a pointer to the associated UIThreadExtensionFunction
  UIThreadExtensionFunction* function() { return function_; }
  const UIThreadExtensionFunction* function() const { return function_; }

 protected:
  CefRefPtr<CefExtension> GetCefExtension() const;

 private:
  // The function for which these details have been created. Must outlive the
  // CefExtensionFunctionDetails instance.
  UIThreadExtensionFunction* function_;

  mutable CefRefPtr<CefExtension> cef_extension_;

  // Verifies correct usage of GetBrowserForTabId* methods.
  mutable bool get_browser_called_first_time_ = false;

  DISALLOW_COPY_AND_ASSIGN(CefExtensionFunctionDetails);
};

}  // namespace extensions

#endif  // CEF_LIBCEF_BROWSER_EXTENSIONS_EXTENSION_FUNCTION_DETAILS_H_
