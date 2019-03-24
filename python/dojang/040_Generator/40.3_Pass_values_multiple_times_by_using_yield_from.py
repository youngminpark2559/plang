def number_generator():
  x = [1, 2, 3]
  # Pass elements of the list to the outside in turn
  yield from x
 
for i in number_generator():
  print(i)

# ================================================================================
g = number_generator()
next(g)
# 1
next(g)
# 2
next(g)
# 3
next(g)
# Traceback (most recent call last):
#   File "<pyshell#105>", line 1, in <module>
#     next(g)
# StopIteration

# ================================================================================
# Use generator object onto yield

def number_generator(stop):
  n = 0
  while n < stop:
    yield n
    n += 1
 
def three_generator():
  # Pass number 3 times to the outside
  yield from number_generator(3)
 
for i in three_generator():
  print(i)

# ================================================================================
# List comprehension
[i for i in range(50) if i % 2 == 0]
# [0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48]

# Generator comprehension
(i for i in range(50) if i % 2 == 0)
# <generator object <genexpr> at 0x024F02A0>