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
// $hash=b7e861d09ab59b636e98e56a191e68a0869b5412$
//

#include "libcef_dll/cpptoc/v8exception_cpptoc.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_string_userfree_t CEF_CALLBACK
v8exception_get_message(struct _cef_v8exception_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefV8ExceptionCppToC::Get(self)->GetMessage();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
v8exception_get_source_line(struct _cef_v8exception_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefV8ExceptionCppToC::Get(self)->GetSourceLine();

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_string_userfree_t CEF_CALLBACK
v8exception_get_script_resource_name(struct _cef_v8exception_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefString _retval = CefV8ExceptionCppToC::Get(self)->GetScriptResourceName();

  // Return type: string
  return _retval.DetachToUserFree();
}

int CEF_CALLBACK v8exception_get_line_number(struct _cef_v8exception_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefV8ExceptionCppToC::Get(self)->GetLineNumber();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK
v8exception_get_start_position(struct _cef_v8exception_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefV8ExceptionCppToC::Get(self)->GetStartPosition();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK v8exception_get_end_position(struct _cef_v8exception_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefV8ExceptionCppToC::Get(self)->GetEndPosition();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK v8exception_get_start_column(struct _cef_v8exception_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefV8ExceptionCppToC::Get(self)->GetStartColumn();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK v8exception_get_end_column(struct _cef_v8exception_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefV8ExceptionCppToC::Get(self)->GetEndColumn();

  // Return type: simple
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefV8ExceptionCppToC::CefV8ExceptionCppToC() {
  GetStruct()->get_message = v8exception_get_message;
  GetStruct()->get_source_line = v8exception_get_source_line;
  GetStruct()->get_script_resource_name = v8exception_get_script_resource_name;
  GetStruct()->get_line_number = v8exception_get_line_number;
  GetStruct()->get_start_position = v8exception_get_start_position;
  GetStruct()->get_end_position = v8exception_get_end_position;
  GetStruct()->get_start_column = v8exception_get_start_column;
  GetStruct()->get_end_column = v8exception_get_end_column;
}

template <>
CefRefPtr<CefV8Exception>
CefCppToCRefCounted<CefV8ExceptionCppToC, CefV8Exception, cef_v8exception_t>::
    UnwrapDerived(CefWrapperType type, cef_v8exception_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<CefV8ExceptionCppToC,
                                         CefV8Exception,
                                         cef_v8exception_t>::DebugObjCt = 0;
#endif

template <>
CefWrapperType CefCppToCRefCounted<CefV8ExceptionCppToC,
                                   CefV8Exception,
                                   cef_v8exception_t>::kWrapperType =
    WT_V8EXCEPTION;
