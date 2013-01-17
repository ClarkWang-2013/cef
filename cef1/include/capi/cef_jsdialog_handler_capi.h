// Copyright (c) 2013 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//

#ifndef CEF_INCLUDE_CAPI_CEF_JSDIALOG_HANDLER_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_JSDIALOG_HANDLER_CAPI_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "include/capi/cef_base_capi.h"


///
// Implement this structure to handle events related to JavaScript dialogs. The
// functions of this structure will be called on the UI thread.
///
typedef struct _cef_jsdialog_handler_t {
  ///
  // Base structure.
  ///
  cef_base_t base;

  ///
  // Called  to run a JavaScript alert message. Return false (0) to display the
  // default alert or true (1) if you displayed a custom alert.
  ///
  int (CEF_CALLBACK *on_jsalert)(struct _cef_jsdialog_handler_t* self,
      struct _cef_browser_t* browser, struct _cef_frame_t* frame,
      const cef_string_t* message);

  ///
  // Called to run a JavaScript confirm request. Return false (0) to display the
  // default alert or true (1) if you displayed a custom alert. If you handled
  // the alert set |retval| to true (1) if the user accepted the confirmation.
  ///
  int (CEF_CALLBACK *on_jsconfirm)(struct _cef_jsdialog_handler_t* self,
      struct _cef_browser_t* browser, struct _cef_frame_t* frame,
      const cef_string_t* message, int* retval);

  ///
  // Called to run a JavaScript prompt request. Return false (0) to display the
  // default prompt or true (1) if you displayed a custom prompt. If you handled
  // the prompt set |retval| to true (1) if the user accepted the prompt and
  // request and |result| to the resulting value.
  ///
  int (CEF_CALLBACK *on_jsprompt)(struct _cef_jsdialog_handler_t* self,
      struct _cef_browser_t* browser, struct _cef_frame_t* frame,
      const cef_string_t* message, const cef_string_t* defaultValue,
      int* retval, cef_string_t* result);
} cef_jsdialog_handler_t;


#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_JSDIALOG_HANDLER_CAPI_H_
