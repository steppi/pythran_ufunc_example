# distutils: language = c++
import numpy as np
cimport numpy as np

np.import_array()
np.import_ufunc()

cdef extern from "_exp1.cpp" nogil:
    double _exp1(double)


cdef void exp1_ufunc(
        char** args, np.npy_intp *dims, np.npy_intp *steps, void *data
) noexcept nogil:
    cdef np.npy_intp i, n = dims[0]
    cdef char *ip0 = args[0]
    cdef char *op0 = args[1]
    cdef double ov0

    for i in range(n):
        ov0 = _exp1((<double*>ip0)[0])
        (<double *>op0)[0] = ov0
        ip0 += steps[0]
        op0 += steps[1]


cdef char ufunc__exp1_types[2]
cdef np.PyUFuncGenericFunction ufunc__exp1_loops[1]
ufunc__exp1_types[0] = <char>np.NPY_DOUBLE
ufunc__exp1_types[1] = <char>np.NPY_DOUBLE
ufunc__exp1_loops[0] = <np.PyUFuncGenericFunction> exp1_ufunc


exp1 = np.PyUFunc_FromFuncAndData(
    ufunc__exp1_loops,
    NULL,
    ufunc__exp1_types,
    1,
    1,
    1,
    0,
    "exp1",
    "Compute the exponential integral exp1.",
    0,
)
