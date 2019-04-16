// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_013_Void_pointers/002_Dereference_void_pointer_variable && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_013_Void_pointers/002_Dereference_void_pointer_variable/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <cstring>
using namespace std;

// ================================================================================ 
int main()
{
  // c value: int variable
  int value=5;

  // c voidPtr: pointer variable,
  // which stores address of any data type variable
  void *voidPtr=&value;
  
  // ================================================================================
  // illegal: cannot dereference a void pointer
  // std::cout<<"*voidPtr: "<<*voidPtr<<std::endl;

  // ================================================================================
  // however, if we cast our void pointer to an int pointer...
  // Explicit cast voidPtr into int*
  // Assign casted voidPtr into *intPtr
  int *intPtr=static_cast<int*>(voidPtr);
  
  // ================================================================================
  // then we can dereference it like normal
  std::cout<<"*intPtr: "<<*intPtr<<std::endl;
  // *intPtr: 5

  // ================================================================================
  return 0;
}