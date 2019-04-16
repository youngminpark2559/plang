// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/005_Dangling_pointer && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/005_Dangling_pointer/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
int main()
{
  // c ptr: pointer variable in the heap,
  // which stores the address of int variable
  int *ptr=new int;

  // ======================================================================
  // Dereference ptr and assign 7 into it
  *ptr=7;

  // ======================================================================
  std::cout<<"ptr: "<<ptr<<std::endl;
  std::cout<<"ptr: "<<&ptr<<std::endl;
  std::cout<<"ptr: "<<*ptr<<std::endl;
  // ptr: 0x1c29c20
  // ptr: 0x7fff7b027580
  // ptr: 7

  // ======================================================================
  // ptr is now a dangling pointer.
  delete ptr;

  // ======================================================================
  std::cout<<"ptr: "<<ptr<<std::endl;
  std::cout<<"ptr: "<<&ptr<<std::endl;
  // Dereferencing a dangling pointer will cause undefined behavior
  std::cout<<"ptr: "<<*ptr<<std::endl;
  // *** Error in `ptr: 0x1c29c20
  // ptr: 0x7fff7b027580
  // ptr: 0

  // ======================================================================
  // trying to deallocate the memory again will also lead to undefined behavior.
  delete ptr;

  // ======================================================================
  return 0;
}
