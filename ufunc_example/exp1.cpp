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
  namespace __pythran_exp1
  {
    struct exp1_capsule
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
        typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::trunc{})>::type>::type __type36;
        typedef decltype(pythonic::operator_::div(std::declval<__type11>(), std::declval<__type3>())) __type38;
        typedef decltype(std::declval<__type36>()(std::declval<__type38>())) __type39;
        typedef decltype(pythonic::operator_::add(std::declval<__type11>(), std::declval<__type39>())) __type40;
        typedef typename pythonic::lazy<__type40>::type __type41;
        typedef __type41 __type42;
        typedef decltype(std::declval<__type10>()(std::declval<__type42>(), std::declval<__type11>(), std::declval<__type11>())) __type43;
        typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type43>::type::iterator>::value_type>::type __type44;
        typedef __type44 __type45;
        typedef __type35 __type48;
        typedef decltype(pythonic::operator_::add(std::declval<__type3>(), std::declval<__type48>())) __type49;
        typedef decltype(pythonic::operator_::div(std::declval<__type45>(), std::declval<__type49>())) __type50;
        typedef decltype(pythonic::operator_::add(std::declval<__type11>(), std::declval<__type50>())) __type51;
        typedef decltype(pythonic::operator_::div(std::declval<__type45>(), std::declval<__type51>())) __type52;
        typedef typename pythonic::lazy<__type52>::type __type53;
        typedef typename __combined<__type35,__type53>::type __type54;
        typedef __type54 __type55;
        typedef decltype(pythonic::operator_::add(std::declval<__type3>(), std::declval<__type55>())) __type56;
        typedef decltype(pythonic::operator_::div(std::declval<__type11>(), std::declval<__type56>())) __type57;
        typedef decltype(pythonic::operator_::mul(std::declval<__type33>(), std::declval<__type57>())) __type58;
        typedef typename __combined<__type0,__type29,__type58>::type __type59;
        typedef typename pythonic::returnable<__type59>::type __type60;
        typedef __type60 result_type;
      }  
      ;
      template <typename argument_type0 >
      inline
      typename type<argument_type0>::result_type operator()(argument_type0 x) const
      ;
    }  ;
    template <typename argument_type0 >
    inline
    typename exp1_capsule::type<argument_type0>::result_type exp1_capsule::operator()(argument_type0 x) const
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
      typedef typename std::remove_cv<typename std::remove_reference<decltype(pythonic::numpy::functor::trunc{})>::type>::type __type25;
      typedef decltype(pythonic::operator_::div(std::declval<__type5>(), std::declval<__type11>())) __type27;
      typedef decltype(std::declval<__type25>()(std::declval<__type27>())) __type28;
      typedef decltype(pythonic::operator_::add(std::declval<__type5>(), std::declval<__type28>())) __type29;
      typedef typename pythonic::lazy<__type29>::type __type30;
      typedef __type30 __type31;
      typedef decltype(std::declval<__type4>()(std::declval<__type31>(), std::declval<__type5>(), std::declval<__type5>())) __type32;
      typedef typename std::remove_cv<typename std::iterator_traits<typename std::remove_reference<__type32>::type::iterator>::value_type>::type __type33;
      typedef __type33 __type34;
      typedef __type24 __type37;
      typedef decltype(pythonic::operator_::add(std::declval<__type11>(), std::declval<__type37>())) __type38;
      typedef decltype(pythonic::operator_::div(std::declval<__type34>(), std::declval<__type38>())) __type39;
      typedef decltype(pythonic::operator_::add(std::declval<__type5>(), std::declval<__type39>())) __type40;
      typedef decltype(pythonic::operator_::div(std::declval<__type34>(), std::declval<__type40>())) __type41;
      typedef typename pythonic::lazy<__type41>::type __type42;
      typedef typename __combined<__type24,__type42>::type __type43;
      typedef typename pythonic::lazy<__type43>::type __type44;
      if (pythonic::operator_::eq(x, 0.0))
      {
        return pythonic::numpy::inf;
      }
      else
      {
        if (pythonic::operator_::le(x, 1L))
        {
          __type22 result = 1.0;
          __type23 term = 1.0;
          {
            long  __target139987192994912 = 25L;
            for (long  k=1L; k < __target139987192994912; k += 1L)
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
        typename pythonic::lazy<decltype(pythonic::operator_::add(20L, pythonic::numpy::functor::trunc{}(pythonic::operator_::div(80L, x))))>::type M = pythonic::operator_::add(20L, pythonic::numpy::functor::trunc{}(pythonic::operator_::div(80L, x)));
        __type44 t0 = 0.0;
        {
          long  __target139987192987904 = 0L;
          for (long  k_=M; k_ > __target139987192987904; k_ += -1L)
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
typename __pythran_exp1::exp1_capsule::type<double>::result_type exp1_capsule(double x) 
{
  return __pythran_exp1::exp1_capsule()(x);
}
#ifdef ENABLE_PYTHON_MODULE

static PyMethodDef Methods[] = {

    {NULL, NULL, 0, NULL}
};


#if PY_MAJOR_VERSION >= 3
  static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "exp1",            /* m_name */
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
PYTHRAN_MODULE_INIT(exp1)(void)
#ifndef _WIN32
__attribute__ ((visibility("default")))
#if defined(GNUC) && !defined(__clang__)
__attribute__ ((externally_visible))
#endif
#endif
;
PyMODINIT_FUNC
PYTHRAN_MODULE_INIT(exp1)(void) {
    import_array()
    #if PY_MAJOR_VERSION >= 3
    PyObject* theModule = PyModule_Create(&moduledef);
    #else
    PyObject* theModule = Py_InitModule3("exp1",
                                         Methods,
                                         ""
    );
    #endif
    if(! theModule)
        PYTHRAN_RETURN;
    PyObject * theDoc = Py_BuildValue("(sss)",
                                      "0.13.1",
                                      "2023-07-21 15:31:15.486510",
                                      "dcfaf0ed9ec42a2be89ee316cb5e779251fe62f732ab7c4b30f35e9b1b1b2a23");
    if(! theDoc)
        PYTHRAN_RETURN;
    PyModule_AddObject(theModule,
                       "__pythran__",
                       theDoc);


PyModule_AddObject(theModule, "exp1_capsule",
                   PyCapsule_New((void*)&exp1_capsule, "exp1_capsule(float64)", NULL)
);
    PYTHRAN_RETURN;
}

#endif