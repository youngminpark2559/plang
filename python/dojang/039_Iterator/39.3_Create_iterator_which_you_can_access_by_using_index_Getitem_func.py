class Iterator_name_you_want:
  # If you implement __getitem__() in class
  # That class becomes iterator
  # __iter__, __next__ are omittable, 
  # and even __init__ too, if you don't have initial value
  def __getitem__(self, 인덱스):
    Code

# ================================================================================
class Counter:
  def __init__(self,stop):
    self.stop=stop

  def __getitem__(self,index):
    if index<self.stop:
      return index
    else:
      raise IndexError

print(Counter(3)[0],Counter(3)[1],Counter(3)[2])
# 0 1 2

for i in Counter(3):
  print(i,end=' ')
# 0 1 2

# ================================================================================
