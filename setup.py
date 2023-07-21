import numpy as np
import pythran

from Cython.Build import cythonize

from setuptools import find_packages
from setuptools import setup
from setuptools.extension import Extension

pythonic_dir = pythran.config.get_include()


_ufuncs_module = Extension(
    "ufunc_example.ufuncs",
    sources=["ufunc_example/ufuncs.pyx", "ufunc_example/_exp1.cpp"],
    include_dirs=[pythonic_dir, np.get_include()],
)

extensions = cythonize(
    [_ufuncs_module],
    compiler_directives={"language_level": 3},
)


setup(
    name="ufunc_example",
    version="0.0.0",
    description="Testing out extensions",
    ext_modules=extensions,
    packages=find_packages(),
)
