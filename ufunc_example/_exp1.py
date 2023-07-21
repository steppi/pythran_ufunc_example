import numpy as np


# pythran export capsule _exp1(float64)
def _exp1(x):
    EPS = np.finfo('float').eps
    GA = 0.5772156649015328
    if x == 0.0:
        return float("inf")
    if x <= 1:
        result = 1.
        term = 1.
        for k in range(1, 25):
            term = -term*k*x/(k + 1)**2
            result += term
            if abs(term) <= abs(result) * EPS:
                break
        return -GA - np.log(x) + x * result
    M = int(20 + np.trunc(80 / x))
    t0 = 0.0
    for k in range(M, 0, -1):
        t0 = k / (1 + k/(x + t0))
    t = 1 / (x + t0)
    return np.exp(-x) * t
        
        
