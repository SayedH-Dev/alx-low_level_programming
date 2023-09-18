import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.op_add(a, b)))
print("{} - {} = {}".format(a, b, cops.op_sub(a, b)))
print("{} x {} = {}".format(a, b, cops.op_mul(a, b)))
print("{} / {} = {}".format(a, b, cops.op_div(a, b)))
print("{} % {} = {}".format(a, b, cops.op_mod(a, b)))
