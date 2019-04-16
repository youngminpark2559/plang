// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/006_Deallocating_memory_may_create_multiple_dangling_pointers && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/006_Deallocating_memory_may_create_multiple_dangling_pointers/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
int main()
{
  // c ptr: pointer variable in the heap,
  // which stores address of int variable
  int *ptr=new int;
  
  // c otherPtr: pointer variable in the stack,
  // which stores address of int variable
  // c otherPtr: stores address of int variable which is pointed by ptr
  int *otherPtr=ptr; // otherPtr is now pointed at that same memory location

  // ======================================================================
  // ptr and otherPtr are now dangling pointers
  delete ptr;
  
  // ======================================================================
  // ptr is now a nullptr
  ptr=0;

  // ======================================================================
  // however, otherPtr is still a dangling pointer!

  return 0;
}

