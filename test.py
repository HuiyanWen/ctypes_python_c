import numpy as np
from ctypes import *
from datetime import datetime
sum_test = cdll.LoadLibrary("./libpycall.so")
x = np.ones(21003*2100)
x1 = np.ones(2100*2100)
x2 = np.ones(2100*2100)
x3 = np.ones(2100*2100)
x4 = np.ones(2100*2100)
x5 = np.ones(2100*2100)
x6 = np.ones(2100*2100)
x7 = np.ones(2100*2100)
x8 = np.ones(2100*2100)
x9 = np.ones(2100*2100)
x10 = np.ones(2103*2100)
y = np.ones(2100)
print(datetime.now())
xx1 = x1.ctypes.data_as(POINTER(c_double))
xx2 = x2.ctypes.data_as(POINTER(c_double))
xx3 = x3.ctypes.data_as(POINTER(c_double))
xx4 = x4.ctypes.data_as(POINTER(c_double))
xx5 = x5.ctypes.data_as(POINTER(c_double))
xx6 = x6.ctypes.data_as(POINTER(c_double))
xx7 = x7.ctypes.data_as(POINTER(c_double))
xx8 = x8.ctypes.data_as(POINTER(c_double))
xx9 = x9.ctypes.data_as(POINTER(c_double))
xx10 = x10.ctypes.data_as(POINTER(c_double))
sum_test.mysum(xx1, xx2, xx3, xx4, xx5, xx6, xx7, xx8, xx9, xx10, y.ctypes.data_as(POINTER(c_double)))
print(datetime.now())
for i in range(0, 21003):
	for j in range(0, 2100):
		dist = pow((x[i*2100+j] - y[j]), 2)
print(datetime.now())