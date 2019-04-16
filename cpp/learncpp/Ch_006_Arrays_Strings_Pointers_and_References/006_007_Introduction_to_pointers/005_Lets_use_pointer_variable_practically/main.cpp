// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/005_Lets_use_pointer_variable_practically && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/005_Lets_use_pointer_variable_practically/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
 
int main()
{
  // c value: int variable
  int value=5;

  // ======================================================================
  // c ptr: pointer variable which stores address of int variable value
  int *ptr=&value;

  // ======================================================================
  // Use address-of operator on variable value
  std::cout<<"&value: "<<&value<<std::endl;
  // &value: 0x7ffe6581d0ac

  // Print value stored in pointer variable ptr
  std::cout<<"ptr: "<<ptr<<std::endl;
  // ptr: 0x7ffe6581d0ac

  return 0;
}
