// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/007_Dereference_operator && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/007_Dereference_operator/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <typeinfo>

// ================================================================================
int main()
{
  // c value: int variable
  int value=5;

  // Use address-of operator on variable value
  std::cout<<"&value: "<<&value<<std::endl;
  // &value: 0x7fff5613a45c

  // Print value stored in variable value
  std::cout<<"value: "<<value<<std::endl;
  // value: 5
  
  // ================================================================================
  // You assign an address value of a "variable value" into pointer variable ptr
  // That is, ptr points to "variable value"
  int *ptr=&value;

  // ================================================================================
  // Print value stored in pointer variable ptr
  std::cout<<"ptr: "<<ptr<<std::endl;
  // 0x7fff5613a45c

  // Use dereference operator on pointer variable ptr which stores address value of variable value
  std::cout<<"*ptr: "<<*ptr<<std::endl;
  // 5
  
  return 0;
}
