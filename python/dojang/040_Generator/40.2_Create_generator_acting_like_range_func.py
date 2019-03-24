
def number_generator(stop):
  n = 0
  while n < stop:
    yield n
    n += 1
 
for i in number_generator(3):
  print(i)

# ================================================================================
# Same code but using next()

g = number_generator(3)

next(g)
# 0
next(g)
# 1
next(g)
# 2
next(g)
# Traceback (most recent call last):
#   File "<pyshell#100>", line 1, in <module>
#     next(g)
# StopIteration

# ================================================================================
# Call function on yield

def upper_generator(x):
  for i in x:
    yield i.upper()

fruits = ['apple', 'pear', 'grape', 'pineapple', 'orange']
for i in upper_generator(fruits):
  print(i)

# ================================================================================
