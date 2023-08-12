# Pythran ufunc example

This repo contains a simple example of a ufunc written with the [NumPy Ufunc API](https://numpy.org/doc/stable/reference/c-api/ufunc.html) which uses [Pythran](https://pythran.readthedocs.io/en/latest/), an ahead-of-time compiler
for a subset of Python, to generate the compiled kernel function.

The function implemented is the Exponential Integral E1, available in SciPy as [exp1](https://docs.scipy.org/doc/scipy/reference/generated/scipy.special.exp1.html). The implementation is a direct translation of the Fortran
implementation used by SciPy into the subset of Python recognized by Pythran.

To install this package clone this repository and within the top level directory run

```bash
pip install .
```

Example usage:

```python
from ufunc_example import exp1

exp1(10)
# 4.156968929685325e-06
```
