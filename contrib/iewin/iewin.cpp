/*
 * FILE : contrib/iewin/iewin.cpp
 * 
 * This file was automatically generated by :
 * Simplified Wrapper and Interface Generator (SWIG)
 * Version 1.1 (Build 883)
 * 
 * Portions Copyright (c) 1995-1998
 * The University of Utah and The Regents of the University of California.
 * Permission is granted to distribute this file in any manner provided
 * this notice remains intact.
 * 
 * Do not make changes to this file--changes will be lost!
 *
 */


#define SWIGCODE
/* Implementation : PYTHON */

#define SWIGPYTHON
#include <string.h>
#include <stdlib.h>
/* Definitions for Windows/Unix exporting */
#if defined(__WIN32__)
#   if defined(_MSC_VER)
#	define SWIGEXPORT(a) __declspec(dllexport) a
#   else
#	if defined(__BORLANDC__)
#	    define SWIGEXPORT(a) a _export
#	else
#	    define SWIGEXPORT(a) a
#	endif
#   endif
#else
#   define SWIGEXPORT(a) a
#endif

#include "Python.h"

#ifdef __cplusplus
extern "C" {
#endif

extern void SWIG_MakePtr(char *, void *, char *);
extern void SWIG_RegisterMapping(char *, char *, void *(*)(void *));
extern char *SWIG_GetPtr(char *, void **, char *);
extern char *SWIG_GetPtrObj(PyObject *, void **, char *);
extern void SWIG_addvarlink(PyObject *, char *, PyObject *(*)(void), int (*)(PyObject *));
extern PyObject *SWIG_newvarlink(void);
#ifdef __cplusplus
}
#endif
#define SWIG_init    initiewinc

#define SWIG_name    "iewinc"

#include "wxPython.h"
#include "IEHtmlWin.h"
#include "pyistream.h"


static PyObject* t_output_helper(PyObject* target, PyObject* o) {
    PyObject*   o2;
    PyObject*   o3;

    if (!target) {
        target = o;
    } else if (target == Py_None) {
        Py_DECREF(Py_None);
        target = o;
    } else {
        if (!PyTuple_Check(target)) {
            o2 = target;
            target = PyTuple_New(1);
            PyTuple_SetItem(target, 0, o2);
        }
        o3 = PyTuple_New(1);
        PyTuple_SetItem(o3, 0, o);

        o2 = target;
        target = PySequence_Concat(o2, o3);
        Py_DECREF(o2);
        Py_DECREF(o3);
    }
    return target;
}

    // Put some wx default wxChar* values into wxStrings.
    DECLARE_DEF_STRING(PanelNameStr);
#ifdef __cplusplus
extern "C" {
#endif
static void *SwigwxMSHTMLEventTowxNotifyEvent(void *ptr) {
    wxMSHTMLEvent *src;
    wxNotifyEvent *dest;
    src = (wxMSHTMLEvent *) ptr;
    dest = (wxNotifyEvent *) src;
    return (void *) dest;
}

static void *SwigwxMSHTMLEventTowxCommandEvent(void *ptr) {
    wxMSHTMLEvent *src;
    wxCommandEvent *dest;
    src = (wxMSHTMLEvent *) ptr;
    dest = (wxCommandEvent *) src;
    return (void *) dest;
}

static void *SwigwxMSHTMLEventTowxEvent(void *ptr) {
    wxMSHTMLEvent *src;
    wxEvent *dest;
    src = (wxMSHTMLEvent *) ptr;
    dest = (wxEvent *) src;
    return (void *) dest;
}

static void *SwigwxMSHTMLEventTowxObject(void *ptr) {
    wxMSHTMLEvent *src;
    wxObject *dest;
    src = (wxMSHTMLEvent *) ptr;
    dest = (wxObject *) src;
    return (void *) dest;
}

#define new_wxMSHTMLEvent(_swigarg0,_swigarg1) (new wxMSHTMLEvent(_swigarg0,_swigarg1))
static PyObject *_wrap_new_wxMSHTMLEvent(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxMSHTMLEvent * _result;
    wxEventType  _arg0 = (wxEventType ) wxEVT_NULL;
    int  _arg1 = (int ) 0;
    char *_kwnames[] = { "commandType","id", NULL };
    char _ptemp[128];

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"|ii:new_wxMSHTMLEvent",_kwnames,&_arg0,&_arg1)) 
        return NULL;
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (wxMSHTMLEvent *)new_wxMSHTMLEvent(_arg0,_arg1);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    if (_result) {
        SWIG_MakePtr(_ptemp, (char *) _result,"_wxMSHTMLEvent_p");
        _resultobj = Py_BuildValue("s",_ptemp);
    } else {
        Py_INCREF(Py_None);
        _resultobj = Py_None;
    }
    return _resultobj;
}

#define wxMSHTMLEvent_GetText1(_swigobj)  (_swigobj->GetText1())
static PyObject *_wrap_wxMSHTMLEvent_GetText1(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxString * _result;
    wxMSHTMLEvent * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxMSHTMLEvent_GetText1",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxMSHTMLEvent_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxMSHTMLEvent_GetText1. Expected _wxMSHTMLEvent_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = new wxString (wxMSHTMLEvent_GetText1(_arg0));

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}{
#if wxUSE_UNICODE
    _resultobj = PyUnicode_FromUnicode(_result->c_str(), _result->Len());
#else
    _resultobj = PyString_FromStringAndSize(_result->c_str(), _result->Len());
#endif
}
{
    delete _result;
}
    return _resultobj;
}

#define wxMSHTMLEvent_GetLong1(_swigobj)  (_swigobj->GetLong1())
static PyObject *_wrap_wxMSHTMLEvent_GetLong1(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    long  _result;
    wxMSHTMLEvent * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxMSHTMLEvent_GetLong1",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxMSHTMLEvent_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxMSHTMLEvent_GetLong1. Expected _wxMSHTMLEvent_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (long )wxMSHTMLEvent_GetLong1(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    _resultobj = Py_BuildValue("l",_result);
    return _resultobj;
}

#define wxMSHTMLEvent_GetLong2(_swigobj)  (_swigobj->GetLong2())
static PyObject *_wrap_wxMSHTMLEvent_GetLong2(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    long  _result;
    wxMSHTMLEvent * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxMSHTMLEvent_GetLong2",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxMSHTMLEvent_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxMSHTMLEvent_GetLong2. Expected _wxMSHTMLEvent_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (long )wxMSHTMLEvent_GetLong2(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    _resultobj = Py_BuildValue("l",_result);
    return _resultobj;
}

static void *SwigwxIEHtmlWinTowxWindow(void *ptr) {
    wxIEHtmlWin *src;
    wxWindow *dest;
    src = (wxIEHtmlWin *) ptr;
    dest = (wxWindow *) src;
    return (void *) dest;
}

static void *SwigwxIEHtmlWinTowxEvtHandler(void *ptr) {
    wxIEHtmlWin *src;
    wxEvtHandler *dest;
    src = (wxIEHtmlWin *) ptr;
    dest = (wxEvtHandler *) src;
    return (void *) dest;
}

static void *SwigwxIEHtmlWinTowxObject(void *ptr) {
    wxIEHtmlWin *src;
    wxObject *dest;
    src = (wxIEHtmlWin *) ptr;
    dest = (wxObject *) src;
    return (void *) dest;
}

#define new_wxIEHtmlWin(_swigarg0,_swigarg1,_swigarg2,_swigarg3,_swigarg4,_swigarg5) (new wxIEHtmlWin(_swigarg0,_swigarg1,_swigarg2,_swigarg3,_swigarg4,_swigarg5))
static PyObject *_wrap_new_wxIEHtmlWin(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxIEHtmlWin * _result;
    wxWindow * _arg0;
    wxWindowID  _arg1 = (wxWindowID ) -1;
    wxPoint * _arg2 = (wxPoint *) &wxDefaultPosition;
    wxSize * _arg3 = (wxSize *) &wxDefaultSize;
    long  _arg4 = (long ) 0;
    wxString * _arg5 = (wxString *) &wxPyPanelNameStr;
    PyObject * _argo0 = 0;
    wxPoint  temp;
    PyObject * _obj2 = 0;
    wxSize  temp0;
    PyObject * _obj3 = 0;
    PyObject * _obj5 = 0;
    char *_kwnames[] = { "parent","id","pos","size","style","name", NULL };
    char _ptemp[128];

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O|iOOlO:new_wxIEHtmlWin",_kwnames,&_argo0,&_arg1,&_obj2,&_obj3,&_arg4,&_obj5)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxWindow_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of new_wxIEHtmlWin. Expected _wxWindow_p.");
        return NULL;
        }
    }
    if (_obj2)
{
    _arg2 = &temp;
    if (! wxPoint_helper(_obj2, &_arg2))
        return NULL;
}
    if (_obj3)
{
    _arg3 = &temp0;
    if (! wxSize_helper(_obj3, &_arg3))
        return NULL;
}
    if (_obj5)
{
    _arg5 = wxString_in_helper(_obj5);
    if (_arg5 == NULL)
        return NULL;
}
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (wxIEHtmlWin *)new_wxIEHtmlWin(_arg0,_arg1,*_arg2,*_arg3,_arg4,*_arg5);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    if (_result) {
        SWIG_MakePtr(_ptemp, (char *) _result,"_wxIEHtmlWin_p");
        _resultobj = Py_BuildValue("s",_ptemp);
    } else {
        Py_INCREF(Py_None);
        _resultobj = Py_None;
    }
{
    if (_obj5)
        delete _arg5;
}
    return _resultobj;
}

#define wxIEHtmlWin_LoadUrl(_swigobj,_swigarg0)  (_swigobj->LoadUrl(_swigarg0))
static PyObject *_wrap_wxIEHtmlWin_LoadUrl(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxIEHtmlWin * _arg0;
    wxString * _arg1;
    PyObject * _argo0 = 0;
    PyObject * _obj1 = 0;
    char *_kwnames[] = { "self","arg2", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"OO:wxIEHtmlWin_LoadUrl",_kwnames,&_argo0,&_obj1)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_LoadUrl. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
{
    _arg1 = wxString_in_helper(_obj1);
    if (_arg1 == NULL)
        return NULL;
}
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    wxIEHtmlWin_LoadUrl(_arg0,*_arg1);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    Py_INCREF(Py_None);
    _resultobj = Py_None;
{
    if (_obj1)
        delete _arg1;
}
    return _resultobj;
}

#define wxIEHtmlWin_LoadString(_swigobj,_swigarg0)  (_swigobj->LoadString(_swigarg0))
static PyObject *_wrap_wxIEHtmlWin_LoadString(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    bool  _result;
    wxIEHtmlWin * _arg0;
    wxString * _arg1;
    PyObject * _argo0 = 0;
    PyObject * _obj1 = 0;
    char *_kwnames[] = { "self","html", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"OO:wxIEHtmlWin_LoadString",_kwnames,&_argo0,&_obj1)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_LoadString. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
{
    _arg1 = wxString_in_helper(_obj1);
    if (_arg1 == NULL)
        return NULL;
}
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (bool )wxIEHtmlWin_LoadString(_arg0,*_arg1);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    _resultobj = Py_BuildValue("i",_result);
{
    if (_obj1)
        delete _arg1;
}
    return _resultobj;
}

#define wxIEHtmlWin_LoadStream(_swigobj,_swigarg0)  (_swigobj->LoadStream(_swigarg0))
static PyObject *_wrap_wxIEHtmlWin_LoadStream(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    bool  _result;
    wxIEHtmlWin * _arg0;
    wxInputStream * _arg1;
    PyObject * _argo0 = 0;
    wxPyInputStream * temp;
    bool  created;
    PyObject * _obj1 = 0;
    char *_kwnames[] = { "self","is", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"OO:wxIEHtmlWin_LoadStream",_kwnames,&_argo0,&_obj1)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_LoadStream. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
{
    if (SWIG_GetPtrObj(_obj1, (void **) &temp, "_wxPyInputStream_p") == 0) {
        _arg1 = temp->m_wxis;
        created = FALSE;
    } else {
        _arg1 = wxPyCBInputStream_create(_obj1, FALSE);
        if (_arg1 == NULL) {
            PyErr_SetString(PyExc_TypeError,"Expected _wxInputStream_p or Python file-like object.");
            return NULL;
        }
        created = TRUE;
    }
}
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (bool )wxIEHtmlWin_LoadStream(_arg0,_arg1);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    _resultobj = Py_BuildValue("i",_result);
{
    if (created)
        delete _arg1;
}
    return _resultobj;
}

#define wxIEHtmlWin_SetCharset(_swigobj,_swigarg0)  (_swigobj->SetCharset(_swigarg0))
static PyObject *_wrap_wxIEHtmlWin_SetCharset(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxIEHtmlWin * _arg0;
    wxString * _arg1;
    PyObject * _argo0 = 0;
    PyObject * _obj1 = 0;
    char *_kwnames[] = { "self","charset", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"OO:wxIEHtmlWin_SetCharset",_kwnames,&_argo0,&_obj1)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_SetCharset. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
{
    _arg1 = wxString_in_helper(_obj1);
    if (_arg1 == NULL)
        return NULL;
}
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    wxIEHtmlWin_SetCharset(_arg0,*_arg1);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    Py_INCREF(Py_None);
    _resultobj = Py_None;
{
    if (_obj1)
        delete _arg1;
}
    return _resultobj;
}

#define wxIEHtmlWin_SetEditMode(_swigobj,_swigarg0)  (_swigobj->SetEditMode(_swigarg0))
static PyObject *_wrap_wxIEHtmlWin_SetEditMode(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxIEHtmlWin * _arg0;
    bool  _arg1;
    PyObject * _argo0 = 0;
    int tempbool1;
    char *_kwnames[] = { "self","seton", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"Oi:wxIEHtmlWin_SetEditMode",_kwnames,&_argo0,&tempbool1)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_SetEditMode. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
    _arg1 = (bool ) tempbool1;
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    wxIEHtmlWin_SetEditMode(_arg0,_arg1);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    Py_INCREF(Py_None);
    _resultobj = Py_None;
    return _resultobj;
}

#define wxIEHtmlWin_GetEditMode(_swigobj)  (_swigobj->GetEditMode())
static PyObject *_wrap_wxIEHtmlWin_GetEditMode(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    bool  _result;
    wxIEHtmlWin * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxIEHtmlWin_GetEditMode",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_GetEditMode. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (bool )wxIEHtmlWin_GetEditMode(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    _resultobj = Py_BuildValue("i",_result);
    return _resultobj;
}

#define wxIEHtmlWin_GetStringSelection(_swigobj,_swigarg0)  (_swigobj->GetStringSelection(_swigarg0))
static PyObject *_wrap_wxIEHtmlWin_GetStringSelection(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxString * _result;
    wxIEHtmlWin * _arg0;
    bool  _arg1 = (bool ) FALSE;
    PyObject * _argo0 = 0;
    int tempbool1 = (int) FALSE;
    char *_kwnames[] = { "self","asHTML", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O|i:wxIEHtmlWin_GetStringSelection",_kwnames,&_argo0,&tempbool1)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_GetStringSelection. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
    _arg1 = (bool ) tempbool1;
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = new wxString (wxIEHtmlWin_GetStringSelection(_arg0,_arg1));

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}{
#if wxUSE_UNICODE
    _resultobj = PyUnicode_FromUnicode(_result->c_str(), _result->Len());
#else
    _resultobj = PyString_FromStringAndSize(_result->c_str(), _result->Len());
#endif
}
{
    delete _result;
}
    return _resultobj;
}

#define wxIEHtmlWin_GetText(_swigobj,_swigarg0)  (_swigobj->GetText(_swigarg0))
static PyObject *_wrap_wxIEHtmlWin_GetText(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    wxString * _result;
    wxIEHtmlWin * _arg0;
    bool  _arg1 = (bool ) FALSE;
    PyObject * _argo0 = 0;
    int tempbool1 = (int) FALSE;
    char *_kwnames[] = { "self","asHTML", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O|i:wxIEHtmlWin_GetText",_kwnames,&_argo0,&tempbool1)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_GetText. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
    _arg1 = (bool ) tempbool1;
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = new wxString (wxIEHtmlWin_GetText(_arg0,_arg1));

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}{
#if wxUSE_UNICODE
    _resultobj = PyUnicode_FromUnicode(_result->c_str(), _result->Len());
#else
    _resultobj = PyString_FromStringAndSize(_result->c_str(), _result->Len());
#endif
}
{
    delete _result;
}
    return _resultobj;
}

#define wxIEHtmlWin_GoBack(_swigobj)  (_swigobj->GoBack())
static PyObject *_wrap_wxIEHtmlWin_GoBack(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    bool  _result;
    wxIEHtmlWin * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxIEHtmlWin_GoBack",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_GoBack. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (bool )wxIEHtmlWin_GoBack(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    _resultobj = Py_BuildValue("i",_result);
    return _resultobj;
}

#define wxIEHtmlWin_GoForward(_swigobj)  (_swigobj->GoForward())
static PyObject *_wrap_wxIEHtmlWin_GoForward(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    bool  _result;
    wxIEHtmlWin * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxIEHtmlWin_GoForward",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_GoForward. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (bool )wxIEHtmlWin_GoForward(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    _resultobj = Py_BuildValue("i",_result);
    return _resultobj;
}

#define wxIEHtmlWin_GoHome(_swigobj)  (_swigobj->GoHome())
static PyObject *_wrap_wxIEHtmlWin_GoHome(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    bool  _result;
    wxIEHtmlWin * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxIEHtmlWin_GoHome",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_GoHome. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (bool )wxIEHtmlWin_GoHome(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    _resultobj = Py_BuildValue("i",_result);
    return _resultobj;
}

#define wxIEHtmlWin_GoSearch(_swigobj)  (_swigobj->GoSearch())
static PyObject *_wrap_wxIEHtmlWin_GoSearch(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    bool  _result;
    wxIEHtmlWin * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxIEHtmlWin_GoSearch",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_GoSearch. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (bool )wxIEHtmlWin_GoSearch(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    _resultobj = Py_BuildValue("i",_result);
    return _resultobj;
}

#define wxIEHtmlWin_Refresh(_swigobj,_swigarg0)  (_swigobj->Refresh(_swigarg0))
static PyObject *_wrap_wxIEHtmlWin_Refresh(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    bool  _result;
    wxIEHtmlWin * _arg0;
    wxIEHtmlRefreshLevel  _arg1;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self","level", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"Oi:wxIEHtmlWin_Refresh",_kwnames,&_argo0,&_arg1)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_Refresh. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (bool )wxIEHtmlWin_Refresh(_arg0,_arg1);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    _resultobj = Py_BuildValue("i",_result);
    return _resultobj;
}

#define wxIEHtmlWin_Stop(_swigobj)  (_swigobj->Stop())
static PyObject *_wrap_wxIEHtmlWin_Stop(PyObject *self, PyObject *args, PyObject *kwargs) {
    PyObject * _resultobj;
    bool  _result;
    wxIEHtmlWin * _arg0;
    PyObject * _argo0 = 0;
    char *_kwnames[] = { "self", NULL };

    self = self;
    if(!PyArg_ParseTupleAndKeywords(args,kwargs,"O:wxIEHtmlWin_Stop",_kwnames,&_argo0)) 
        return NULL;
    if (_argo0) {
        if (_argo0 == Py_None) { _arg0 = NULL; }
        else if (SWIG_GetPtrObj(_argo0,(void **) &_arg0,"_wxIEHtmlWin_p")) {
            PyErr_SetString(PyExc_TypeError,"Type error in argument 1 of wxIEHtmlWin_Stop. Expected _wxIEHtmlWin_p.");
        return NULL;
        }
    }
{
    PyThreadState* __tstate = wxPyBeginAllowThreads();
    _result = (bool )wxIEHtmlWin_Stop(_arg0);

    wxPyEndAllowThreads(__tstate);
    if (PyErr_Occurred()) return NULL;
}    _resultobj = Py_BuildValue("i",_result);
    return _resultobj;
}

static PyMethodDef iewincMethods[] = {
	 { "wxIEHtmlWin_Stop", (PyCFunction) _wrap_wxIEHtmlWin_Stop, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_Refresh", (PyCFunction) _wrap_wxIEHtmlWin_Refresh, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_GoSearch", (PyCFunction) _wrap_wxIEHtmlWin_GoSearch, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_GoHome", (PyCFunction) _wrap_wxIEHtmlWin_GoHome, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_GoForward", (PyCFunction) _wrap_wxIEHtmlWin_GoForward, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_GoBack", (PyCFunction) _wrap_wxIEHtmlWin_GoBack, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_GetText", (PyCFunction) _wrap_wxIEHtmlWin_GetText, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_GetStringSelection", (PyCFunction) _wrap_wxIEHtmlWin_GetStringSelection, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_GetEditMode", (PyCFunction) _wrap_wxIEHtmlWin_GetEditMode, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_SetEditMode", (PyCFunction) _wrap_wxIEHtmlWin_SetEditMode, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_SetCharset", (PyCFunction) _wrap_wxIEHtmlWin_SetCharset, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_LoadStream", (PyCFunction) _wrap_wxIEHtmlWin_LoadStream, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_LoadString", (PyCFunction) _wrap_wxIEHtmlWin_LoadString, METH_VARARGS | METH_KEYWORDS },
	 { "wxIEHtmlWin_LoadUrl", (PyCFunction) _wrap_wxIEHtmlWin_LoadUrl, METH_VARARGS | METH_KEYWORDS },
	 { "new_wxIEHtmlWin", (PyCFunction) _wrap_new_wxIEHtmlWin, METH_VARARGS | METH_KEYWORDS },
	 { "wxMSHTMLEvent_GetLong2", (PyCFunction) _wrap_wxMSHTMLEvent_GetLong2, METH_VARARGS | METH_KEYWORDS },
	 { "wxMSHTMLEvent_GetLong1", (PyCFunction) _wrap_wxMSHTMLEvent_GetLong1, METH_VARARGS | METH_KEYWORDS },
	 { "wxMSHTMLEvent_GetText1", (PyCFunction) _wrap_wxMSHTMLEvent_GetText1, METH_VARARGS | METH_KEYWORDS },
	 { "new_wxMSHTMLEvent", (PyCFunction) _wrap_new_wxMSHTMLEvent, METH_VARARGS | METH_KEYWORDS },
	 { NULL, NULL }
};
#ifdef __cplusplus
}
#endif
/*
 * This table is used by the pointer type-checker
 */
static struct { char *n1; char *n2; void *(*pcnv)(void *); } _swig_mapping[] = {
    { "_wxEvent","_wxMSHTMLEvent",SwigwxMSHTMLEventTowxEvent},
    { "_signed_long","_long",0},
    { "_wxPrintQuality","_wxCoord",0},
    { "_wxPrintQuality","_int",0},
    { "_wxPrintQuality","_signed_int",0},
    { "_wxPrintQuality","_unsigned_int",0},
    { "_wxPrintQuality","_wxWindowID",0},
    { "_wxPrintQuality","_uint",0},
    { "_wxPrintQuality","_EBool",0},
    { "_wxPrintQuality","_size_t",0},
    { "_wxPrintQuality","_time_t",0},
    { "_wxNotifyEvent","_wxMSHTMLEvent",SwigwxMSHTMLEventTowxNotifyEvent},
    { "_byte","_unsigned_char",0},
    { "_long","_unsigned_long",0},
    { "_long","_signed_long",0},
    { "_size_t","_wxCoord",0},
    { "_size_t","_wxPrintQuality",0},
    { "_size_t","_time_t",0},
    { "_size_t","_unsigned_int",0},
    { "_size_t","_int",0},
    { "_size_t","_wxWindowID",0},
    { "_size_t","_uint",0},
    { "_uint","_wxCoord",0},
    { "_uint","_wxPrintQuality",0},
    { "_uint","_time_t",0},
    { "_uint","_size_t",0},
    { "_uint","_unsigned_int",0},
    { "_uint","_int",0},
    { "_uint","_wxWindowID",0},
    { "_wxChar","_char",0},
    { "_wxCommandEvent","_wxMSHTMLEvent",SwigwxMSHTMLEventTowxCommandEvent},
    { "_char","_wxChar",0},
    { "_struct_wxNativeFontInfo","_wxNativeFontInfo",0},
    { "_EBool","_wxCoord",0},
    { "_EBool","_wxPrintQuality",0},
    { "_EBool","_signed_int",0},
    { "_EBool","_int",0},
    { "_EBool","_wxWindowID",0},
    { "_unsigned_long","_long",0},
    { "_wxNativeFontInfo","_struct_wxNativeFontInfo",0},
    { "_signed_int","_wxCoord",0},
    { "_signed_int","_wxPrintQuality",0},
    { "_signed_int","_EBool",0},
    { "_signed_int","_wxWindowID",0},
    { "_signed_int","_int",0},
    { "_WXTYPE","_wxDateTime_t",0},
    { "_WXTYPE","_short",0},
    { "_WXTYPE","_signed_short",0},
    { "_WXTYPE","_unsigned_short",0},
    { "_unsigned_short","_wxDateTime_t",0},
    { "_unsigned_short","_WXTYPE",0},
    { "_unsigned_short","_short",0},
    { "_wxObject","_wxIEHtmlWin",SwigwxIEHtmlWinTowxObject},
    { "_wxObject","_wxMSHTMLEvent",SwigwxMSHTMLEventTowxObject},
    { "_signed_short","_WXTYPE",0},
    { "_signed_short","_short",0},
    { "_unsigned_char","_byte",0},
    { "_unsigned_int","_wxCoord",0},
    { "_unsigned_int","_wxPrintQuality",0},
    { "_unsigned_int","_time_t",0},
    { "_unsigned_int","_size_t",0},
    { "_unsigned_int","_uint",0},
    { "_unsigned_int","_wxWindowID",0},
    { "_unsigned_int","_int",0},
    { "_short","_wxDateTime_t",0},
    { "_short","_WXTYPE",0},
    { "_short","_unsigned_short",0},
    { "_short","_signed_short",0},
    { "_wxWindowID","_wxCoord",0},
    { "_wxWindowID","_wxPrintQuality",0},
    { "_wxWindowID","_time_t",0},
    { "_wxWindowID","_size_t",0},
    { "_wxWindowID","_EBool",0},
    { "_wxWindowID","_uint",0},
    { "_wxWindowID","_int",0},
    { "_wxWindowID","_signed_int",0},
    { "_wxWindowID","_unsigned_int",0},
    { "_int","_wxCoord",0},
    { "_int","_wxPrintQuality",0},
    { "_int","_time_t",0},
    { "_int","_size_t",0},
    { "_int","_EBool",0},
    { "_int","_uint",0},
    { "_int","_wxWindowID",0},
    { "_int","_unsigned_int",0},
    { "_int","_signed_int",0},
    { "_wxDateTime_t","_unsigned_short",0},
    { "_wxDateTime_t","_short",0},
    { "_wxDateTime_t","_WXTYPE",0},
    { "_time_t","_wxCoord",0},
    { "_time_t","_wxPrintQuality",0},
    { "_time_t","_unsigned_int",0},
    { "_time_t","_int",0},
    { "_time_t","_wxWindowID",0},
    { "_time_t","_uint",0},
    { "_time_t","_size_t",0},
    { "_wxCoord","_int",0},
    { "_wxCoord","_signed_int",0},
    { "_wxCoord","_unsigned_int",0},
    { "_wxCoord","_wxWindowID",0},
    { "_wxCoord","_uint",0},
    { "_wxCoord","_EBool",0},
    { "_wxCoord","_size_t",0},
    { "_wxCoord","_time_t",0},
    { "_wxCoord","_wxPrintQuality",0},
    { "_wxEvtHandler","_wxIEHtmlWin",SwigwxIEHtmlWinTowxEvtHandler},
    { "_wxWindow","_wxIEHtmlWin",SwigwxIEHtmlWinTowxWindow},
{0,0,0}};

static PyObject *SWIG_globals;
#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT(void) initiewinc() {
	 PyObject *m, *d;
	 SWIG_globals = SWIG_newvarlink();
	 m = Py_InitModule("iewinc", iewincMethods);
	 d = PyModule_GetDict(m);
	 PyDict_SetItemString(d,"wxEVT_COMMAND_MSHTML_BEFORENAVIGATE2", PyInt_FromLong((long) wxEVT_COMMAND_MSHTML_BEFORENAVIGATE2));
	 PyDict_SetItemString(d,"wxEVT_COMMAND_MSHTML_NEWWINDOW2", PyInt_FromLong((long) wxEVT_COMMAND_MSHTML_NEWWINDOW2));
	 PyDict_SetItemString(d,"wxEVT_COMMAND_MSHTML_DOCUMENTCOMPLETE", PyInt_FromLong((long) wxEVT_COMMAND_MSHTML_DOCUMENTCOMPLETE));
	 PyDict_SetItemString(d,"wxEVT_COMMAND_MSHTML_PROGRESSCHANGE", PyInt_FromLong((long) wxEVT_COMMAND_MSHTML_PROGRESSCHANGE));
	 PyDict_SetItemString(d,"wxEVT_COMMAND_MSHTML_STATUSTEXTCHANGE", PyInt_FromLong((long) wxEVT_COMMAND_MSHTML_STATUSTEXTCHANGE));
	 PyDict_SetItemString(d,"wxEVT_COMMAND_MSHTML_TITLECHANGE", PyInt_FromLong((long) wxEVT_COMMAND_MSHTML_TITLECHANGE));
	 PyDict_SetItemString(d,"wxIEHTML_REFRESH_NORMAL", PyInt_FromLong((long) wxIEHTML_REFRESH_NORMAL));
	 PyDict_SetItemString(d,"wxIEHTML_REFRESH_IFEXPIRED", PyInt_FromLong((long) wxIEHTML_REFRESH_IFEXPIRED));
	 PyDict_SetItemString(d,"wxIEHTML_REFRESH_CONTINUE", PyInt_FromLong((long) wxIEHTML_REFRESH_CONTINUE));
	 PyDict_SetItemString(d,"wxIEHTML_REFRESH_COMPLETELY", PyInt_FromLong((long) wxIEHTML_REFRESH_COMPLETELY));


    wxClassInfo::CleanUpClasses();
    wxClassInfo::InitializeClasses();

{
   int i;
   for (i = 0; _swig_mapping[i].n1; i++)
        SWIG_RegisterMapping(_swig_mapping[i].n1,_swig_mapping[i].n2,_swig_mapping[i].pcnv);
}
}
