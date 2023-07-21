import numpy as np
import pythran

from Cython.Build import cythonize

from setuptools import find_packages
from setuptools import setup
from setuptools.extension import Extension

pythonic_dir = pythran.config.get_include()


exp1_module = Extension(
    "ufunc_example.exp2",
    sources=["ufunc_example/exp1.pyx", "ufunc_example/exp1.cpp"],
    include_dirs=[pythonic_dir, np.get_include()],
)


setup(
    name="ufunc_example",
    version="0.0.0",
    description="Testing out extensions",
    ext_modules=cythonize(exp1_module),
    packages=find_packages(),
)
