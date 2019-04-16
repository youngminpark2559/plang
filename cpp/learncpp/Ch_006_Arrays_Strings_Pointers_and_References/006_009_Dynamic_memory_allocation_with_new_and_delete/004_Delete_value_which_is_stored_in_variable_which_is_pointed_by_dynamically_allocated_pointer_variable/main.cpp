// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/004_Delete_value_which_is_stored_in_variable_which_is_pointed_by_dynamically_allocated_pointer_variable && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/004_Delete_value_which_is_stored_in_variable_which_is_pointed_by_dynamically_allocated_pointer_variable/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
  // When we are done with a dynamically allocated variable, 
  // we need to explicitly tell C++ to free the memory for reuse. 
  // For single variables, this is done via the scalar (non-array) form 
  // of the delete operator:

  // ======================================================================
  int *ptr=new int(5);
  std::cout<<"ptr: "<<ptr<<std::endl;
  std::cout<<"ptr: "<<&ptr<<std::endl;
  std::cout<<"ptr: "<<*ptr<<std::endl;
  // ptr: 0xa95c20
  // ptr: 0x7ffc62dbfe00
  // ptr: 5

  // ======================================================================
  // return the memory pointed to by ptr to the operating system
  delete ptr;
  std::cout<<"ptr: "<<ptr<<std::endl;
  std::cout<<"ptr: "<<&ptr<<std::endl;
  std::cout<<"ptr: "<<*ptr<<std::endl;
  // ptr: 0xa95c20
  // ptr: 0x7ffc62dbfe00
  // ptr: 0

  // ======================================================================
  // set ptr to be a null pointer (use nullptr instead of 0 in C++11)
  // ptr=0; 
}
