
# You should implement __call__

class Trace:
  # func is the function which you will call
  def __init__(self,func):
    self.func=func
 
  def __call__(self):
    print(self.func.__name__, 'Start of function')
    # Call func()
    self.func()
    print(self.func.__name__, 'End of function')

# Use class-based decorator
@Trace
def hello():
  print('hello')
 
hello()

# ================================================================================
# Same code but without using decorator

# You don't use decorator
def hello():
  print('hello')
 
# You create instance with passing hello func
trace_hello = Trace(hello)

# You call instance (__call__() is actually called)
trace_hello()

# ================================================================================
