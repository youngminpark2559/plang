// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/002_Dynamic_memory_allocation_for_variable && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/002_Dynamic_memory_allocation_for_variable/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================

// In the above case, we’re requesting an integer’s worth of memory from the operating system. The new operator creates the object using that memory, and then returns a pointer containing the address of the memory that has been allocated.

// Most often, we’ll assign the return value to our own pointer variable so we can access the allocated memory later.

// 1
// int *ptr = new int; // dynamically allocate an integer and assign the address to ptr so we can access it later
// We can then dereference the pointer to access the memory:

// 1
// *ptr = 7; // assign value of 7 to allocated memory
// If it wasn’t before, it should now be clear at least one case in which pointers are useful. Without a pointer to hold the address of the memory that was just allocated, we’d have no way to access the memory that was just allocated for us!





#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
  // To dynamically allocate the memory space which will have a single variable, 
  // we use the scalar (non-array) form (like int than int[]) 
  // with the new operator:
  new int; // dynamically allocate an integer (and discard the result)

  // ======================================================================
  // c ptr: pointer variable which stores the address of int variable
  int *ptr=new int;

  // ======================================================================
  // Dereference the pointer variable to access the memory:
  *ptr=7;

  // ======================================================================
  std::cout<<"ptr: "<<ptr<<std::endl;
  // ptr: 0x2511c40

  std::cout<<"&ptr: "<<&ptr<<std::endl;
  // &ptr: 0x7ffca855f760

  std::cout<<"*ptr: "<<*ptr<<std::endl;
  // *ptr: 7

  return 0;
}