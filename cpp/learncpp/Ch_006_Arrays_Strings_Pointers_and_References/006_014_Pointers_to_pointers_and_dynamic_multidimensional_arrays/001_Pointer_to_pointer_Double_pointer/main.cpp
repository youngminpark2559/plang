// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_014_Pointers_to_pointers_and_dynamic_multidimensional_arrays/001_Pointer_to_pointer_Double_pointer && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_014_Pointers_to_pointers_and_dynamic_multidimensional_arrays/001_Pointer_to_pointer_Double_pointer/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
 
int main()
{
  // c ptr: pointer variable which stores address of int variable
  int *ptr;

  // ======================================================================
  // c ptrptr: pointer variable which stores address of pointer
  // which stores int variable
  int **ptrptr;

  // ======================================================================
  int int_v=2;

  // ======================================================================
  ptr=&int_v;
  std::cout<<"ptr: "<<ptr<<std::endl;
  // ptr: 0x7ffe128a92e4

  std::cout<<"*ptr: "<<*ptr<<std::endl;
  // *ptr: 2

  // ======================================================================
  ptrptr=&ptr;
  std::cout<<"**ptrptr: "<<**ptrptr<<std::endl;
  // **ptrptr: 2

  return 0;
}

