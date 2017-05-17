// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=b2141197beb4b7a706c82c5dffbfe5338667d2a2$
//

#include "libcef_dll/cpptoc/before_download_callback_cpptoc.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/download_item_callback_cpptoc.h"
#include "libcef_dll/cpptoc/download_item_cpptoc.h"
#include "libcef_dll/ctocpp/download_handler_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

void CefDownloadHandlerCToCpp::OnBeforeDownload(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefDownloadItem> download_item,
    const CefString& suggested_name,
    CefRefPtr<CefBeforeDownloadCallback> callback) {
  cef_download_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_before_download))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: download_item; type: refptr_diff
  DCHECK(download_item.get());
  if (!download_item.get())
    return;
  // Verify param: suggested_name; type: string_byref_const
  DCHECK(!suggested_name.empty());
  if (suggested_name.empty())
    return;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return;

  // Execute
  _struct->on_before_download(_struct, CefBrowserCppToC::Wrap(browser),
                              CefDownloadItemCppToC::Wrap(download_item),
                              suggested_name.GetStruct(),
                              CefBeforeDownloadCallbackCppToC::Wrap(callback));
}

void CefDownloadHandlerCToCpp::OnDownloadUpdated(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefDownloadItem> download_item,
    CefRefPtr<CefDownloadItemCallback> callback) {
  cef_download_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_download_updated))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: download_item; type: refptr_diff
  DCHECK(download_item.get());
  if (!download_item.get())
    return;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return;

  // Execute
  _struct->on_download_updated(_struct, CefBrowserCppToC::Wrap(browser),
                               CefDownloadItemCppToC::Wrap(download_item),
                               CefDownloadItemCallbackCppToC::Wrap(callback));
}

// CONSTRUCTOR - Do not edit by hand.

CefDownloadHandlerCToCpp::CefDownloadHandlerCToCpp() {}

template <>
cef_download_handler_t* CefCToCppRefCounted<
    CefDownloadHandlerCToCpp,
    CefDownloadHandler,
    cef_download_handler_t>::UnwrapDerived(CefWrapperType type,
                                           CefDownloadHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefDownloadHandlerCToCpp,
                                         CefDownloadHandler,
                                         cef_download_handler_t>::DebugObjCt =
    0;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefDownloadHandlerCToCpp,
                                   CefDownloadHandler,
                                   cef_download_handler_t>::kWrapperType =
    WT_DOWNLOAD_HANDLER;
