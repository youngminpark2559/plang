// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/008_Check_whethe_dynamic_memory_space_is_successfully_allocated && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/008_Check_whethe_dynamic_memory_space_is_successfully_allocated/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
int main()
{
  // c value: pointer variable in the heap,
  // which stores address of int variable
  int *value=new(std::nothrow) int; // ask for an integer's worth of memory

  // ======================================================================
  // handle case where new returned null
  if(!value)
  {
    // Do error handling here
    std::cout<<"Could not allocate memory";
  }

  return 0;
}

