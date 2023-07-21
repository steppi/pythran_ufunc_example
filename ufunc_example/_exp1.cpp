#define PY_MAJOR_VERSION 3
#undef ENABLE_PYTHON_MODULE
#include <pythonic/core.hpp>
#include <pythonic/python/core.hpp>
#include <pythonic/types/bool.hpp>
#include <pythonic/types/int.hpp>
#ifdef _OPENMP
#include <omp.h>
#endif
#include <pythonic/include/types/float64.hpp>
#include <pythonic/types/float64.hpp>
#include <pythonic/include/builtins/abs.hpp>
#include <pythonic/include/builtins/int_.hpp>
#include <pythonic/include/builtins/range.hpp>
#include <pythonic/include/numpy/exp.hpp>
#include <pythonic/include/numpy/inf.hpp>
#include <pythonic/include/numpy/log.hpp>
#include <pythonic/include/numpy/square.hpp>
#include <pythonic/include/numpy/trunc.hpp>
#include <pythonic/include/operator_/add.hpp>
#include <pythonic/include/operator_/div.hpp>
#include <pythonic/include/operator_/eq.hpp>
#include <pythonic/include/operator_/iadd.hpp>
#include <pythonic/include/operator_/le.hpp>
#include <pythonic/include/operator_/mul.hpp>
#include <pythonic/include/operator_/neg.hpp>
#include <pythonic/include/operator_/sub.hpp>
#include <pythonic/builtins/abs.hpp>
#include <pythonic/builtins/int_.hpp>
#include <pythonic/builtins/range.hpp>
#include <pythonic/numpy/exp.hpp>
#include <pythonic/numpy/inf.hpp>
#include <pythonic/numpy/log.hpp>
#include <pythonic/numpy/square.hpp>
#include <pythonic/numpy/trunc.hpp>
#include <pythonic/operator_/add.hpp>
#include <pythonic/operator_/div.hpp>
#include <pythonic/operator_/eq.hpp>
#include <pythonic/operator_/iadd.hpp>
#include <pythonic/operator_/le.hpp>
#include <pythonic/operator_/mul.hpp>
#include <pythonic/operator_/neg.hpp>
#include <pythonic/operator_/sub.hpp>
namespace 
{
  namespace __pythran__exp1
  {
    struct _exp1
    {
      typedef void callable;
      typedef void pure;
      template <typename argument_type0 >
      struct type
      {
        typedef double __type0;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::log{})>::type>::type __type1;
        typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type2;
        typedef __type2 __type3;
        typedef decltype(std::declval<__type1>()(std::declval<__type3>())) __type4;
        typedef decltype(pythonic::operator_::sub(std::declval<__type0>(), std::declval<__type4>())) __type5;
        typedef typename pythonic::assignable<__type0>::type __type7;
        typedef __type7 __type8;
        typedef decltype(pythonic::operator_::neg(std::declval<__type8>())) __type9;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type10;
        typedef long __type11;
        typedef decltype(std::declval<__type10>()(std::declval<__type11>(), std::declval<__type11>())) __type12;
        typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type12>::type::iterator>::value_type>::type __type13;
        typedef __type13 __type14;
        typedef decltype(pythonic::operator_::mul(std::declval<__type9>(), std::declval<__type14>())) __type15;
        typedef decltype(pythonic::operator_::mul(std::declval<__type15>(), std::declval<__type3>())) __type17;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::square{})>::type>::type __type18;
        typedef decltype(pythonic::operator_::add(std::declval<__type14>(), std::declval<__type11>())) __type20;
        typedef decltype(std::declval<__type18>()(std::declval<__type20>())) __type21;
        typedef decltype(pythonic::operator_::div(std::declval<__type17>(), std::declval<__type21>())) __type22;
        typedef typename pythonic::assignable<__type22>::type __type23;
        typedef typename __combined<__type7,__type23>::type __type24;
        typedef __type24 __type25;
        typedef typename __combined<__type7,__type25>::type __type26;
        typedef __type26 __type27;
        typedef decltype(pythonic::operator_::mul(std::declval<__type3>(), std::declval<__type27>())) __type28;
        typedef decltype(pythonic::operator_::add(std::declval<__type5>(), std::declval<__type28>())) __type29;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::exp{})>::type>::type __type30;
        typedef decltype(pythonic::operator_::neg(std::declval<__type3>())) __type32;
        typedef decltype(std::declval<__type30>()(std::declval<__type32>())) __type33;
        typedef typename pythonic::lazy<__type0>::type __type35;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::int_{})>::type>::type __type36;
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::trunc{})>::type>::type __type37;
        typedef decltype(pythonic::operator_::div(std::declval<__type11>(), std::declval<__type3>())) __type39;
        typedef decltype(std::declval<__type37>()(std::declval<__type39>())) __type40;
        typedef decltype(pythonic::operator_::add(std::declval<__type11>(), std::declval<__type40>())) __type41;
        typedef decltype(std::declval<__type36>()(std::declval<__type41>())) __type42;
        typedef typename pythonic::lazy<__type42>::type __type43;
        typedef __type43 __type44;
        typedef decltype(std::declval<__type10>()(std::declval<__type44>(), std::declval<__type11>(), std::declval<__type11>())) __type45;
        typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type45>::type::iterator>::value_type>::type __type46;
        typedef __type46 __type47;
        typedef __type35 __type50;
        typedef decltype(pythonic::operator_::add(std::declval<__type3>(), std::declval<__type50>())) __type51;
        typedef decltype(pythonic::operator_::div(std::declval<__type47>(), std::declval<__type51>())) __type52;
        typedef decltype(pythonic::operator_::add(std::declval<__type11>(), std::declval<__type52>())) __type53;
        typedef decltype(pythonic::operator_::div(std::declval<__type47>(), std::declval<__type53>())) __type54;
        typedef typename pythonic::lazy<__type54>::type __type55;
        typedef typename __combined<__type35,__type55>::type __type56;
        typedef __type56 __type57;
        typedef decltype(pythonic::operator_::add(std::declval<__type3>(), std::declval<__type57>())) __type58;
        typedef decltype(pythonic::operator_::div(std::declval<__type11>(), std::declval<__type58>())) __type59;
        typedef decltype(pythonic::operator_::mul(std::declval<__type33>(), std::declval<__type59>())) __type60;
        typedef typename __combined<__type0,__type29,__type60>::type __type61;
        typedef typename pythonic::returnable<__type61>::type __type62;
        typedef __type62 result_type;
      }  
      ;
      template <typename argument_type0 >
      inline
      typename type<argument_type0>::result_type operator()(argument_type0 x) const
      ;
    }  ;
    template <typename argument_type0 >
    inline
    typename _exp1::type<argument_type0>::result_type _exp1::operator()(argument_type0 x) const
    {
      typedef double __type0;
      typedef typename pythonic::assignable<__type0>::type __type1;
      typedef __type1 __type2;
      typedef decltype(pythonic::operator_::neg(std::declval<__type2>())) __type3;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::range{})>::type>::type __type4;
      typedef long __type5;
      typedef decltype(std::declval<__type4>()(std::declval<__type5>(), std::declval<__type5>())) __type6;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type6>::type::iterator>::value_type>::type __type7;
      typedef __type7 __type8;
      typedef decltype(pythonic::operator_::mul(std::declval<__type3>(), std::declval<__type8>())) __type9;
      typedef typename std::remove_cv<typename std::remove_reference<argument_type0>::type>::type __type10;
      typedef __type10 __type11;
      typedef decltype(pythonic::operator_::mul(std::declval<__type9>(), std::declval<__type11>())) __type12;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::square{})>::type>::type __type13;
      typedef decltype(pythonic::operator_::add(std::declval<__type8>(), std::declval<__type5>())) __type15;
      typedef decltype(std::declval<__type13>()(std::declval<__type15>())) __type16;
      typedef decltype(pythonic::operator_::div(std::declval<__type12>(), std::declval<__type16>())) __type17;
      typedef typename pythonic::assignable<__type17>::type __type18;
      typedef typename __combined<__type1,__type18>::type __type19;
      typedef __type19 __type20;
      typedef typename __combined<__type1,__type20>::type __type21;
      typedef typename pythonic::assignable<__type21>::type __type22;
      typedef typename pythonic::assignable<__type19>::type __type23;
      typedef typename pythonic::lazy<__type0>::type __type24;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::builtins::functor::int_{})>::type>::type __type25;
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::trunc{})>::type>::type __type26;
      typedef decltype(pythonic::operator_::div(std::declval<__type5>(), std::declval<__type11>())) __type28;
      typedef decltype(std::declval<__type26>()(std::declval<__type28>())) __type29;
      typedef decltype(pythonic::operator_::add(std::declval<__type5>(), std::declval<__type29>())) __type30;
      typedef decltype(std::declval<__type25>()(std::declval<__type30>())) __type31;
      typedef typename pythonic::lazy<__type31>::type __type32;
      typedef __type32 __type33;
      typedef decltype(std::declval<__type4>()(std::declval<__type33>(), std::declval<__type5>(), std::declval<__type5>())) __type34;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type34>::type::iterator>::value_type>::type __type35;
      typedef __type35 __type36;
      typedef __type24 __type39;
      typedef decltype(pythonic::operator_::add(std::declval<__type11>(), std::declval<__type39>())) __type40;
      typedef decltype(pythonic::operator_::div(std::declval<__type36>(), std::declval<__type40>())) __type41;
      typedef decltype(pythonic::operator_::add(std::declval<__type5>(), std::declval<__type41>())) __type42;
      typedef decltype(pythonic::operator_::div(std::declval<__type36>(), std::declval<__type42>())) __type43;
      typedef typename pythonic::lazy<__type43>::type __type44;
      typedef typename __combined<__type24,__type44>::type __type45;
      typedef typename pythonic::lazy<__type45>::type __type46;
      if (pythonic::operator_::eq(x, 0.0))
      {
        return +pythonic::numpy::inf;
      }
      else
      {
        if (pythonic::operator_::le(x, 1L))
        {
          __type22 result = 1.0;
          __type23 term = 1.0;
          {
            long  __target140469446421056 = 25L;
            for (long  k=1L; k < __target140469446421056; k += 1L)
            {
              term = pythonic::operator_::div(pythonic::operator_::mul(pythonic::operator_::mul(pythonic::operator_::neg(term), k), x), pythonic::numpy::functor::square{}(pythonic::operator_::add(k, 1L)));
              result += term;
              if (pythonic::operator_::le(pythonic::builtins::functor::abs{}(term), pythonic::operator_::mul(pythonic::builtins::functor::abs{}(result), 2.220446049250313e-16)))
              {
                break;
              }
            }
          }
          return pythonic::operator_::add(pythonic::operator_::sub(-0.5772156649015328, pythonic::numpy::functor::log{}(x)), pythonic::operator_::mul(x, result));
        }
        typename pythonic::lazy<decltype(pythonic::builtins::functor::int_{}(pythonic::operator_::add(20L, pythonic::numpy::functor::trunc{}(pythonic::operator_::div(80L, x)))))>::type M = pythonic::builtins::functor::int_{}(pythonic::operator_::add(20L, pythonic::numpy::functor::trunc{}(pythonic::operator_::div(80L, x))));
        __type46 t0 = 0.0;
        {
          long  __target140469446414000 = 0L;
          for (long  k_=M; k_ > __target140469446414000; k_ += -1L)
          {
            t0 = pythonic::operator_::div(k_, pythonic::operator_::add(1L, pythonic::operator_::div(k_, pythonic::operator_::add(x, t0))));
          }
        }
        return pythonic::operator_::mul(pythonic::numpy::functor::exp{}(pythonic::operator_::neg(x)), pythonic::operator_::div(1L, pythonic::operator_::add(x, t0)));
      }
    }
  }
}
#include <pythonic/python/exception_handler.hpp>
inline
typename __pythran__exp1::_exp1::type<double>::result_type _exp1(double x) 
{
  return __pythran__exp1::_exp1()(x);
}
#ifdef ENABLE_PYTHON_MODULE

static PyMethodDef Methods[] = {

    {NULL, NULL, 0, NULL}
};


#if PY_MAJOR_VERSION >= 3
  static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "_exp1",            /* m_name */
    "",         /* m_doc */
    -1,                  /* m_size */
    Methods,             /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#define PYTHRAN_RETURN return theModule
#define PYTHRAN_MODULE_INIT(s) PyInit_##s
#else
#define PYTHRAN_RETURN return
#define PYTHRAN_MODULE_INIT(s) init##s
#endif
PyMODINIT_FUNC
PYTHRAN_MODULE_INIT(_exp1)(void)
#ifndef _WIN32
__attribute__ ((visibility("default")))
#if defined(GNUC) && !defined(__clang__)
__attribute__ ((externally_visible))
#endif
#endif
;
PyMODINIT_FUNC
PYTHRAN_MODULE_INIT(_exp1)(void) {
    import_array()
    #if PY_MAJOR_VERSION >= 3
    PyObject* theModule = PyModule_Create(&moduledef);
    #else
    PyObject* theModule = Py_InitModule3("_exp1",
                                         Methods,
                                         ""
    );
    #endif
    if(! theModule)
        PYTHRAN_RETURN;
    PyObject * theDoc = Py_BuildValue("(sss)",
                                      "0.13.1",
                                      "2023-08-12 12:01:44.685942",
                                      "e8786660fd6a90ca754f16ddf831536304d4deafc8418d7252915cff4979918e");
    if(! theDoc)
        PYTHRAN_RETURN;
    PyModule_AddObject(theModule,
                       "__pythran__",
                       theDoc);


PyModule_AddObject(theModule, "_exp1",
                   PyCapsule_New((void*)&_exp1, "_exp1(float64)", NULL)
);
    PYTHRAN_RETURN;
}

#endif