
# Call __iter__() of iterable_object
it=iter(iterable_object)

# Call __next__() of iterator
it=next(iterator)

# ================================================================================
import random

# lambda:random.randint(0,5) means callable object
# Call that object continuously
# And if you meet 2, end iteration
it = iter(lambda:random.randint(0,5),2)

# next(it)
# 0
# next(it)
# 3
# next(it)
# 1
# next(it)
# Traceback (most recent call last):
#   File "<pyshell#37>", line 1, in <module>
#     next(it)
# StopIteration

# ================================================================================
for i in iter(lambda:random.randint(0,5),2):
  print(i, end=' ')

# 3 1 4 0 5 3 3 5 0 4 1 

# ================================================================================
# Same code using while and if

while True:
  i=random.randint(0,5)
  if i==2:
    break
  print(i,end=' ')

# ================================================================================
# When you default value for next(),
# StopIteration exception won't occur

Iterable_obj=range(3)
it=iter(Iterable_obj)

# next(it,10)
# 0
# next(it,10)
# 1
# next(it,10)
# 2
# next(it,10)
# 10
# next(it,10)
# 10

# ================================================================================
