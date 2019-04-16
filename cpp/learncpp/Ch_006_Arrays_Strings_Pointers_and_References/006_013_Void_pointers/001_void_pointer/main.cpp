#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
  // c nValue: int variable
  int nValue;
  
  // c fValue: float variable
  float fValue;
  
  // c Something: define struct
  struct Something
  {
    int n;
    float f;
  };
  
  // ================================================================================
  // c sValue: instance of struct Something
  Something sValue;
  
  // ================================================================================
  // c ptr: pointer variable 
  // which stores address of any variable
  void *ptr;

  // ================================================================================
  ptr=&nValue; // valid
  ptr=&fValue; // valid
  ptr=&sValue; // valid

  // ================================================================================
  return 0;
}