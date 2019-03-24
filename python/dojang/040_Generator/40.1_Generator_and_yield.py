# ================================================================================
Generator: function which creates iterator

Iterator should implement __iter__(), __next__()
or __getitem__() in its class

But generator only requires you to use yield keyword in the function
So, it's more simple

# ================================================================================
If you use yield keyword in the function,
that function becomes generator.

You set values on the yield

def number_generator():
  yield 0
  yield 1
  yield 2

for i in number_generator():
  print(i)


# ================================================================================
Generator object which is created from generator function
is really iterator?

g=number_generator()
dir(g)

You will see __iter__, __next__

# ================================================================================
What does "yield" mean?

def number_generator():
  # Pass 0 to the outside of number_generator(), 
  # and number_generator() yields code running to the outside
  yield 0

  # Pass 1 to the outside of number_generator(), 
  # and number_generator() yields code running to the outside
  yield 1    # 1을 함수 바깥으로 전달하면서 코드 실행을 함수 바깥에 양보
  
  # Pass 2 to the outside of number_generator(), 
  # and number_generator() yields code running to the outside
  yield 2

# Create generator 
g=number_generator()

# Get 2
a = next(g)
# Code execution is for print()
print(a)
 
b = next(g)
print(b)
 
c = next(g)
print(c)

# ================================================================================


