// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/009_Null_pointers_and_dynamic_memory_allocation && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/009_Null_pointers_and_dynamic_memory_allocation/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
int main()
{
  int *ptr;
  std::cout<<"ptr: "<<ptr<<std::endl;
  std::cout<<"ptr: "<<&ptr<<std::endl;
  std::cout<<"ptr: "<<*ptr<<std::endl;
  // ptr: 0x400ae0
  // ptr: 0x7fffc895e130
  // ptr: 1447122753

  // ======================================================================
  // Null pointers (pointers which store 0 or nullptr as address) are 
  // particularly useful when dealing with dynamic memory allocation. 

  // In the context of dynamic memory allocation, 
  // a null pointer basically says 
  // “no memory has been allocated to this pointer”. 

  // This allows us to do things like conditionally allocate memory:
  // If ptr isn't already allocated, allocate it
  if(!ptr) // if ptr stores 0 or nullptr
  {
    std::cout<<"ptr stores 0 or nullptr"<<std::endl;
    std::cout<<"ptr=new int; will be executed"<<std::endl;
    // c ptr: stores address of int variable which is in the heap
    ptr=new int;
  }

  // ======================================================================
  // Deleting a null pointer has no effect. 
  // Thus, there is no need for the following:
  // if(ptr)
  //   delete ptr;

  // ======================================================================
  // Instead, you simply can write:
  // delete ptr;

  // ======================================================================
  // If ptr is non-null, 
  // the dynamically allocated variable will be deleted. 
  // If it is null, nothing will happen.

  return 0;
}
