# square_ufunc.pyx
# cython: language_level=3


cdef extern from "numpy/ufuncobject.h":
    int PyUFunc_FromFuncAndData(void**, void*, char*, int, int, int, int, char*, char*, int)

cdef extern from "Python.h":
    void* PyModule_GetDict(object module)

cdef extern from "exp1.cpp" nogil:
    double exp1(double)

cdef void exp1_ufunc(char** args, Py_ssize_t* dimensions, Py_ssize_t* steps, void* data) nogil:
    cdef Py_ssize_t n = dimensions[0]
    cdef char* in_ = args[0]
    cdef char* out = args[1]
    cdef Py_ssize_t in_step = steps[0]
    cdef Py_ssize_t out_step = steps[1]
    cdef double x, result

    for i in range(n):
        x = (<double*>in_)[0]
        result = exp1(x)  # Use the Pythran-generated function
        (<double*>out)[0] = result

        in_ += in_step
        out += out_step


exp1 = PyUFunc_FromFuncAndData(
    &exp1_ufunc,
    NULL, "d->d",
    1,
    1,
    1,
    PyUFunc_None,
    "exp1",
    "exp1_docstring",
    0,
)
