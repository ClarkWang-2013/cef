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
// $hash=a3c8b4724fb0e6d53f31573d6f7dafa61f199527$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_END_TRACING_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_END_TRACING_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_trace_capi.h"
#include "include/cef_trace.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefEndTracingCallbackCToCpp
    : public CefCToCppRefCounted<CefEndTracingCallbackCToCpp,
                                 CefEndTracingCallback,
                                 cef_end_tracing_callback_t> {
 public:
  CefEndTracingCallbackCToCpp();

  // CefEndTracingCallback methods.
  void OnEndTracingComplete(const CefString& tracing_file) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_END_TRACING_CALLBACK_CTOCPP_H_
