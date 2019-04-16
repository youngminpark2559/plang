// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/007_Operator_new_can_fail_Std_nothrow_constant && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/007_Operator_new_can_fail_Std_nothrow_constant/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
int main()
{
  // c value: pointer variable in the heap,
  // which stores address of int variable
  // value will be set to a null pointer 
  // if the integer allocation fails
  int *value=new(std::nothrow) int;

  // ======================================================================
  *value=10;

  // ======================================================================
  std::cout<<"value: "<<value<<std::endl;
  std::cout<<"value: "<<&value<<std::endl;
  std::cout<<"value: "<<*value<<std::endl;
  // value: 0xdddc20
  // value: 0x7ffc40c00da0
  // value: 10

  return 0;
}

