// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_008_Pointers_and_arrays/002_Try_dereference_array_Array_is_not_identical_to_pointer && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_008_Pointers_and_arrays/002_Try_dereference_array_Array_is_not_identical_to_pointer/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
int main()
{
  // ======================================================================
  // c array: (5,) array which stores int values
  int array[5]={9,7,5,3,1};

  // ======================================================================
  // Dereference "array" which stores an address of the first element
  std::cout<<"*array: "<<*array<<std::endl;
  // *array: 9

  // ======================================================================
  char name[]="Jason"; // C-style string

  // Dereference name 
  // which stores an address of the first element of array "name"
  std::cout<<"*name: "<<*name<<std::endl;
  // *name: J

  // ======================================================================
  return 0;
}
