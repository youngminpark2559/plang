

# Set parameter x which decorator will use
def is_multiple(x):
    # func is function which you will call
    def real_decorator(func):
        # Same function prototype with func
        def wrapper(a,b):
            # Call func
            r=func(a,b)
            # Check using if statement
            if r%x==0:
              print('{0}의 반환값은 {1}의 배수입니다.'.format(func.__name__, x))
            else:
              print('{0}의 반환값은 {1}의 배수가 아닙니다.'.format(func.__name__, x))
            # Return return value of func
            return r
        # Return wrapper()
        return wrapper
    # Return real_decorator()
    return real_decorator

# Pass argument as you use decorator
@is_multiple(3)
def add(a,b):
  return a+b

print(add(10,20))
print(add(2,5))

# ================================================================================
# Use multiple decorators which has parameter

@Decorator1(arg)
@Decorator2(arg)
def func_name():
  code


@is_multiple(3)
@is_multiple(7)
def add(a,b):
  return a+b
 
add(10, 20)

# ================================================================================
# Same code but without using decorator

decorated_add=is_multiple(3)(is_multiple(7)(add))
decorated_add(10,20)

# ================================================================================
import functools
 
def is_multiple(x):
  def real_decorator(func):
    # Pass func to functools.wraps()
    # And decorate it above wrapper()
    @functools.wraps(func)
    def wrapper(a, b):
      r = func(a, b)
      if r % x == 0:
        print('{0}의 반환값은 {1}의 배수입니다.'.format(func.__name__, x))
      else:
        print('{0}의 반환값은 {1}의 배수가 아닙니다.'.format(func.__name__, x))
      return r
    return wrapper
  return real_decorator
 
@is_multiple(3)
@is_multiple(7)
def add(a,b):
  return a+b
 
add(10, 20)
# add의 반환값은 7의 배수가 아닙니다.
# add의 반환값은 3의 배수입니다.

# @functools.wraps preserves information of original function
# When you create decorator, use @functools.wraps

