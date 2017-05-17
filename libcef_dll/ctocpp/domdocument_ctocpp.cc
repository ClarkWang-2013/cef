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
// $hash=8f474a766fbe4a540f7d11ba76775b8de495e774$
//

#include "libcef_dll/ctocpp/domdocument_ctocpp.h"
#include "libcef_dll/ctocpp/domnode_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

CefDOMDocument::Type CefDOMDocumentCToCpp::GetType() {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_type))
    return DOM_DOCUMENT_TYPE_UNKNOWN;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_dom_document_type_t _retval = _struct->get_type(_struct);

  // Return type: simple
  return _retval;
}

CefRefPtr<CefDOMNode> CefDOMDocumentCToCpp::GetDocument() {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_document))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_document(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

CefRefPtr<CefDOMNode> CefDOMDocumentCToCpp::GetBody() {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_body))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_body(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

CefRefPtr<CefDOMNode> CefDOMDocumentCToCpp::GetHead() {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_head))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_head(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

CefString CefDOMDocumentCToCpp::GetTitle() {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_title))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_title(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefRefPtr<CefDOMNode> CefDOMDocumentCToCpp::GetElementById(
    const CefString& id) {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_element_by_id))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: id; type: string_byref_const
  DCHECK(!id.empty());
  if (id.empty())
    return NULL;

  // Execute
  cef_domnode_t* _retval = _struct->get_element_by_id(_struct, id.GetStruct());

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

CefRefPtr<CefDOMNode> CefDOMDocumentCToCpp::GetFocusedNode() {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_focused_node))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_domnode_t* _retval = _struct->get_focused_node(_struct);

  // Return type: refptr_same
  return CefDOMNodeCToCpp::Wrap(_retval);
}

bool CefDOMDocumentCToCpp::HasSelection() {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_selection))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_selection(_struct);

  // Return type: bool
  return _retval ? true : false;
}

int CefDOMDocumentCToCpp::GetSelectionStartOffset() {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selection_start_offset))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_selection_start_offset(_struct);

  // Return type: simple
  return _retval;
}

int CefDOMDocumentCToCpp::GetSelectionEndOffset() {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selection_end_offset))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_selection_end_offset(_struct);

  // Return type: simple
  return _retval;
}

CefString CefDOMDocumentCToCpp::GetSelectionAsMarkup() {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selection_as_markup))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_selection_as_markup(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDOMDocumentCToCpp::GetSelectionAsText() {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selection_as_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_selection_as_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDOMDocumentCToCpp::GetBaseURL() {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_base_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_base_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefDOMDocumentCToCpp::GetCompleteURL(const CefString& partialURL) {
  cef_domdocument_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_complete_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: partialURL; type: string_byref_const
  DCHECK(!partialURL.empty());
  if (partialURL.empty())
    return CefString();

  // Execute
  cef_string_userfree_t _retval =
      _struct->get_complete_url(_struct, partialURL.GetStruct());

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

// CONSTRUCTOR - Do not edit by hand.

CefDOMDocumentCToCpp::CefDOMDocumentCToCpp() {}

template <>
cef_domdocument_t*
CefCToCppRefCounted<CefDOMDocumentCToCpp, CefDOMDocument, cef_domdocument_t>::
    UnwrapDerived(CefWrapperType type, CefDOMDocument* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<CefDOMDocumentCToCpp,
                                         CefDOMDocument,
                                         cef_domdocument_t>::DebugObjCt = 0;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefDOMDocumentCToCpp,
                                   CefDOMDocument,
                                   cef_domdocument_t>::kWrapperType =
    WT_DOMDOCUMENT;
