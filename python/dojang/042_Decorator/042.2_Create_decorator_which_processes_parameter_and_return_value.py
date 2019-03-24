



# func: function you will call
def trace(func):
    # function which you will call is like add(a, b)
    def wrapper(a,b):
        # You pass a and b into func
        r = func(a, b)
        # Print parameter and return value
        print("func.__name__",func.__name__)
        print("a",a)
        print("b",b)
        print("r",r)
        # return return value of func
        return r
    # return wrapper()
    return wrapper

# Use trace decorator onto add()
@trace
def add(a,b):
  return a+b
 
print(add(10,20))

# ================================================================================
# Decorator for function 
# which has variable number of argument and variable number of keyword argument

def trace(func):
  # Use variable number of argument and keyword argument
  def wrapper(*args,**kwargs):
    # Pass args and kwargs into func with unpacking them
    r=func(*args,**kwargs)
    print("func.__name__",func.__name__)
    print("a",a)
    print("b",b)
    print("r",r)
    return r
  return wrapper

@trace
def get_max(*args):
  return max(args)
 
@trace
def get_min(**kwargs):
  return min(kwargs.values())
 
print(get_max(10,20))
print(get_min(x=10,y=20,z=30))

# ================================================================================
# Use decorator onto method

클래스를 만들면서 메서드에 데코레이터를 사용할 때는 self를 주의해야 합니다. 
인스턴스 메서드는 항상 self를 받으므로 데코레이터를 만들 때도 wrapper 함수의 첫 번째 매개변수는 self로 지정해야 합니다(클래스 메서드는 cls). 
마찬가지로 func를 호출할 때도 self와 매개변수를 그대로 넣어야 합니다.


def trace(func):
  # Note that you should use self
  def wrapper(self,a,b):
    # Note that you should pass self
    r=func(self,a,b)
    print('{0}(a={1},b={2})->{3}'.format(func.__name__,a,b,r))
    return r
  return wrapper
 
class Calc:
  @trace
  # Since add() is instance method of class Calc
  # you should use self as the first parameter
  def add(self,a,b):
    return a+b
 
c=Calc()
print(c.add(10,20))
# add(a=10, b=20) -> 30
# 30

# ================================================================================
