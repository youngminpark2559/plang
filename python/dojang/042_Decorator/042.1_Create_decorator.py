Decorator: is used to add additional functionalities 
to the function without editing function

# ================================================================================
# Wrap function by function (closure)

def trace(func):
  def wrapper():
    print(func.__name__, '함수 시작')
    func()
    print(func.__name__, '함수 끝')
  return wrapper
 
def hello():
  print('hello')
 
def world():
  print('world')
 
trace_hello = trace(hello)
trace_hello()

trace_world = trace(world)
trace_world()

# ================================================================================
# Use decorator

# func is the function which you will call
def trace(func):
  def wrapper():
    print(func.__name__, '함수 시작')
    # Call passed func
    func()
    print(func.__name__, '함수 끝')
  # Return wrapper()
  return wrapper
 
@trace
def hello():
  print('hello')
 
@trace
def world():
  print('world')
 
hello()
world()

# ================================================================================
# Multiple decorators

def decorator1(func):
  def wrapper():
    print('decorator1')
    func()
  return wrapper
 
def decorator2(func):
  def wrapper():
    print('decorator2')
    func()
  return wrapper
 
@decorator1
@decorator2
def hello():
  print('hello')
 
hello()

# ================================================================================
# Same code without using decorator

decorated_hello=decorator1(decorator2(hello))
decorated_hello()

# ================================================================================
