/////////////////////////////////////////////////////////////////////////////
// Name:        my_typemaps.i
// Purpose:     Special typemaps specifically for wxPython.
//
// Author:      Robin Dunn
//
// Created:     7/3/97
// RCS-ID:      $Id$
// Copyright:   (c) 1998 by Total Control Software
// Licence:     wxWindows license
/////////////////////////////////////////////////////////////////////////////


//---------------------------------------------------------------------------
// Tell SWIG to wrap all the wrappers with our thread protection

%exception {
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    $action
    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) SWIG_fail;
}


//----------------------------------------------------------------------
// Typemaps to convert a list of items to an int (size) and an array

%typemap(in) (int choices, wxString* choices_array ) {
    $1 = PyList_Size($input);
    $2 = wxString_LIST_helper($input);
    if ($2 == NULL) SWIG_fail;
}
%typemap(freearg) (int choices, wxString* choices_array ) {
    if ($2) delete [] $2;
}


//---------------------------------------------------------------------------
// wxString typemaps


%typemap(in) wxString& (bool temp=False) {
    $1 = wxString_in_helper($input);
    if ($1 == NULL) SWIG_fail;
    temp = True;
}
%typemap(freearg) wxString& {
    if (temp$argnum)
        delete $1;
}

%typemap(out) wxString& {
%#if wxUSE_UNICODE
    $result = PyUnicode_FromWideChar($1->c_str(), $1->Len());
%#else
    $result = PyString_FromStringAndSize($1->c_str(), $1->Len());
%#endif
}


%apply wxString& { wxString* }



%typemap(out) wxString {
%#if wxUSE_UNICODE
    $result = PyUnicode_FromWideChar($1.c_str(), $1.Len());
%#else
    $result = PyString_FromStringAndSize($1.c_str(), $1.Len());
%#endif
}

%typemap(varout) wxString {
%#if wxUSE_UNICODE
    $result = PyUnicode_FromWideChar($1.c_str(), $1.Len());
%#else
    $result = PyString_FromStringAndSize($1.c_str(), $1.Len());
%#endif
}


%typemap(in) wxString {
    wxString* sptr = wxString_in_helper($input);
    if (sptr == NULL) SWIG_fail;
    $1 = *sptr;
    delete sptr;
}

%typemap(typecheck, precedence=SWIG_TYPECHECK_POINTER) wxString& {
    $1 = PyString_Check($input) || PyUnicode_Check($input);
}

//---------------------------------------------------------------------------
// wxMemoryBuffer  (needed for wxSTC)

%typemap(in) wxMemoryBuffer& (bool temp=False) {
    if (!PyString_Check($input)) {
        PyErr_SetString(PyExc_TypeError, "String buffer expected");
        SWIG_fail;
    }
    char* str = PyString_AS_STRING($input);
    int   len = PyString_GET_SIZE($input);
    $1 = new wxMemoryBuffer(len);
    temp = True;
    memcpy($1->GetData(), str, len);
}

%typemap(freearg) wxMemoryBuffer& {
    if (temp$argnum) delete $1;
}

%typemap(out) wxMemoryBuffer {
    $result = PyString_FromStringAndSize((char*)$1.GetData(), $1.GetDataLen());
}



//---------------------------------------------------------------------------
// Typemaps to convert Python sequence objects (tuples, etc.) to
// wxSize, wxPoint, wxRealPoint, and wxRect.


%typemap(in) wxSize& (wxSize temp) {
    $1 = &temp;
    if ( ! wxSize_helper($input, &$1)) SWIG_fail;
}
%typemap(typecheck, precedence=SWIG_TYPECHECK_POINTER) wxSize& {
    $1 = wxPySimple_typecheck($input, wxT("wxSize"), 2);
}


%typemap(in) wxPoint& (wxPoint temp) {
    $1 = &temp;
    if ( ! wxPoint_helper($input, &$1)) SWIG_fail;
}
%typemap(typecheck, precedence=SWIG_TYPECHECK_POINTER) wxPoint& {
    $1 = wxPySimple_typecheck($input, wxT("wxPoint"), 2);
}


%typemap(in) wxRealPoint& (wxRealPoint temp) {
    $1 = &temp;
    if ( ! wxRealPoint_helper($input, &$1)) SWIG_fail;
}
%typemap(typecheck, precedence=SWIG_TYPECHECK_POINTER) wxRealPoint& {
    $1 = wxPySimple_typecheck($input, wxT("wxRealPoint"), 2);
}


%typemap(in) wxRect& (wxRect temp) {
    $1 = &temp;
    if ( ! wxRect_helper($input, &$1)) SWIG_fail;
}
%typemap(typecheck, precedence=SWIG_TYPECHECK_POINTER) wxRect& {
    $1 = wxPySimple_typecheck($input, wxT("wxRect"), 4);
}


%typemap(in) wxPoint2D& (wxPoint2D temp) {
    $1 = &temp;
    if ( ! wxPoint2D_helper($input, &$1)) SWIG_fail;
}
%typemap(typecheck, precedence=SWIG_TYPECHECK_POINTER) wxPoint2D& {
    $1 = wxPySimple_typecheck($input, wxT("wxPoint2D"), 2);
}


//---------------------------------------------------------------------------
// Typemap to convert strings to wxColour.  Two string formats are accepted,
// either a colour name, or a hex colour spec like "#RRGGBB"

%typemap(in) wxColour& (wxColour temp) {
    $1 = &temp;
    if ( ! wxColour_helper($input, &$1)) SWIG_fail;
}
%typemap(typecheck, precedence=SWIG_TYPECHECK_POINTER) wxColour& {
    $1 = wxColour_typecheck($input);
}



//---------------------------------------------------------------------------
// Typemap for wxArrayString from Python sequence objects

%typemap(in) wxArrayString& (bool temp=False) {
    if (! PySequence_Check($input)) {
        PyErr_SetString(PyExc_TypeError, "Sequence of strings expected.");
        SWIG_fail;
    }
    $1 = new wxArrayString;
    temp = True;
    int i, len=PySequence_Length($input);
    for (i=0; i<len; i++) {
        PyObject* item = PySequence_GetItem($input, i);
%#if wxUSE_UNICODE
        PyObject* str  = PyObject_Unicode(item);
%#else
        PyObject* str  = PyObject_Str(item);
%#endif
        if (PyErr_Occurred())  SWIG_fail;
        $1->Add(Py2wxString(str));
        Py_DECREF(item);
        Py_DECREF(str);
    }
}

%typemap(freearg) wxArrayString& {
    if (temp$argnum) delete $1;
}

//---------------------------------------------------------------------------
// Typemap for wxArrayInt from Python sequence objects

%typemap(in) wxArrayInt& (bool temp=False) {
    if (! PySequence_Check($input)) {
        PyErr_SetString(PyExc_TypeError, "Sequence of integers expected.");
        SWIG_fail;
    }
    $1 = new wxArrayInt;
    temp = True;
    int i, len=PySequence_Length($input);
    for (i=0; i<len; i++) {
        PyObject* item = PySequence_GetItem($input, i);
        PyObject* number  = PyNumber_Int(item);
        $1->Add(PyInt_AS_LONG(number));
        Py_DECREF(item);
        Py_DECREF(number);
    }
}

%typemap(freearg) wxArrayInt& {
    if (temp$argnum) delete $1;
}


//---------------------------------------------------------------------------
// Typemaps to convert an array of ints to a list for return values
%typemap(out) wxArrayInt& {
    $result = PyList_New(0);
    size_t idx;
    for (idx = 0; idx < $1->GetCount(); idx += 1) {
        PyObject* val = PyInt_FromLong( $1->Item(idx) );
        PyList_Append($result, val);
        Py_DECREF(val);
    }
}

%typemap(out) wxArrayInt {
    $result = PyList_New(0);
    size_t idx;
    for (idx = 0; idx < $1.GetCount(); idx += 1) {
        PyObject* val = PyInt_FromLong( $1.Item(idx) );
        PyList_Append($result, val);
        Py_DECREF(val);
    }
}



// Typemaps to convert an array of ints to a list for return values
%typemap(out) wxArrayString& {
    $result = wxArrayString2PyList_helper(*$1);
}

%typemap(out) wxArrayString {
    $result = wxArrayString2PyList_helper($1);
}


//---------------------------------------------------------------------------

%typemap(out) bool {
    $result = $1 ? Py_True : Py_False; Py_INCREF($result);
}


// These fragments are iserted in modules that need to convert PyObjects to
// integer values, my versions allow any numeric type to be used, as long as
// it can be converted to a PyInt.  (Specifically, I allow floats where the
// default SWIG_AsLong would raise an obsucre exception from within
// PyLong_AsLong.)

%fragment("SWIG_AsLong","header") %{
SWIGSTATICINLINE(long)
SWIG_AsLong(PyObject * obj)
{
    if (PyNumber_Check(obj))
        return PyInt_AsLong(obj);
    else {
        PyObject* errmsg = PyString_FromFormat("Expected number, got %s",
                                               obj->ob_type->tp_name);
        PyErr_SetObject(PyExc_TypeError, errmsg);
        Py_DECREF(errmsg);
        return 0;
    }
}
%}

%fragment("SWIG_AsUnsignedLong","header", fragment="SWIG_AsLong") %{
SWIGSTATICINLINE(unsigned long)
SWIG_AsUnsignedLong(PyObject * obj) 
{
  if (PyLong_Check(obj)) {
    return PyLong_AsUnsignedLong(obj);
  } else {
    long i = SWIG_AsLong(obj);
    if ( !PyErr_Occurred() && (i < 0)) {
      PyErr_SetString(PyExc_TypeError, "negative value received for unsigned type");
    }
    return i;
  }
}
%}


%fragment("SWIG_AsDouble","header") %{
SWIGSTATICINLINE(double)
SWIG_AsDouble(PyObject *obj)
{
    if (PyNumber_Check(obj))
        return PyFloat_AsDouble(obj);
    else {
        PyObject* errmsg = PyString_FromFormat("Expected number, got %s",
                                               obj->ob_type->tp_name);
        PyErr_SetObject(PyExc_TypeError, errmsg);
        Py_DECREF(errmsg);
        return 0;
    }
}
%}


//---------------------------------------------------------------------------
// Typemap for when GDI objects are returned by reference.  This will cause a
// copy to be made instead of returning a reference to the same instance.  The
// GDI object's internal refcounting scheme will do a copy-on-write of the
// internal data as needed.

// These too?
//, wxRegion&, wxPalette&

%typemap(out) wxBrush&, wxPen&, wxFont&, wxBitmap&, wxIcon&, wxCursor& {
    $*1_ltype* resultptr = new $*1_ltype(*$1);
    $result = SWIG_NewPointerObj((void*)(resultptr), $1_descriptor, 1);
}


//---------------------------------------------------------------------------
// Typemaps to convert return values that are base class pointers
// to the real derived type, if possible.  See wxPyMake_wxObject in
// helpers.cpp

%typemap(out) wxEvtHandler*             { $result = wxPyMake_wxObject($1); }
%typemap(out) wxMenu*                   { $result = wxPyMake_wxObject($1); }
%typemap(out) wxValidator*              { $result = wxPyMake_wxObject($1); }

%typemap(out) wxApp*                    { $result = wxPyMake_wxObject($1); }
%typemap(out) wxPyApp*                  { $result = wxPyMake_wxObject($1); }
%typemap(out) wxDC*                     { $result = wxPyMake_wxObject($1); }
%typemap(out) wxFSFile*                 { $result = wxPyMake_wxObject($1); }
%typemap(out) wxFileSystem*             { $result = wxPyMake_wxObject($1); }
%typemap(out) wxGridTableBase*          { $result = wxPyMake_wxObject($1); }
%typemap(out) wxImageList*              { $result = wxPyMake_wxObject($1); }
%typemap(out) wxListItem*               { $result = wxPyMake_wxObject($1); }
%typemap(out) wxMenuItem*               { $result = wxPyMake_wxObject($1); }
%typemap(out) wxMouseEvent*             { $result = wxPyMake_wxObject($1); }
%typemap(out) wxObject*                 { $result = wxPyMake_wxObject($1); }
%typemap(out) wxPyPrintout*             { $result = wxPyMake_wxObject($1); }
%typemap(out) wxToolBarToolBase*        { $result = wxPyMake_wxObject($1); }
%typemap(out) wxToolTip*                { $result = wxPyMake_wxObject($1); }


%typemap(out) wxBitmapButton*           { $result = wxPyMake_wxObject($1); }
%typemap(out) wxButton*                 { $result = wxPyMake_wxObject($1); }
%typemap(out) wxControl*                { $result = wxPyMake_wxObject($1); }
%typemap(out) wxFrame*                  { $result = wxPyMake_wxObject($1); }
%typemap(out) wxGrid*                   { $result = wxPyMake_wxObject($1); }
%typemap(out) wxListCtrl*               { $result = wxPyMake_wxObject($1); }
%typemap(out) wxMDIChildFrame*          { $result = wxPyMake_wxObject($1); }
%typemap(out) wxMDIClientWindow*        { $result = wxPyMake_wxObject($1); }
%typemap(out) wxMenuBar*                { $result = wxPyMake_wxObject($1); }
%typemap(out) wxNotebook*               { $result = wxPyMake_wxObject($1); }
%typemap(out) wxStaticBox*              { $result = wxPyMake_wxObject($1); }
%typemap(out) wxStatusBar*              { $result = wxPyMake_wxObject($1); }
%typemap(out) wxTextCtrl*               { $result = wxPyMake_wxObject($1); }
%typemap(out) wxToolBar*                { $result = wxPyMake_wxObject($1); }
%typemap(out) wxToolBarBase*            { $result = wxPyMake_wxObject($1); }
%typemap(out) wxTreeCtrl*               { $result = wxPyMake_wxObject($1); }
%typemap(out) wxPyTreeCtrl*             { $result = wxPyMake_wxObject($1); }
%typemap(out) wxWindow*                 { $result = wxPyMake_wxObject($1); }
%typemap(out) wxHtmlWindow*             { $result = wxPyMake_wxObject($1); }
%typemap(out) wxPyHtmlWindow*           { $result = wxPyMake_wxObject($1); }
%typemap(out) wxWizardPage*             { $result = wxPyMake_wxObject($1); }

%typemap(out) wxSizer*                  { $result = wxPyMake_wxSizer($1); }


//%typemap(python, out) wxHtmlCell*               { $target = wxPyMake_wxObject($source); }
//%typemap(python, out) wxHtmlContainerCell*      { $target = wxPyMake_wxObject($source); }
//%typemap(python, out) wxHtmlParser*             { $target = wxPyMake_wxObject($source); }
//%typemap(python, out) wxHtmlWinParser*          { $target = wxPyMake_wxObject($source); }

//---------------------------------------------------------------------------
//---------------------------------------------------------------------------






