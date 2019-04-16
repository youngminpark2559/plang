// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_014_Pointers_to_pointers_and_dynamic_multidimensional_arrays/003_Array_which_stores_pointers && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_014_Pointers_to_pointers_and_dynamic_multidimensional_arrays/003_Array_which_stores_pointers/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
 
int main()
{
  // Create array which stores pointer variables 
  // which store address of int variable
  int **array = new int*[10];

  // ======================================================================
  int int_1=1;
  int int_2=2;

  int *ptr1=&int_1;
  int *ptr2=&int_2;

  // ======================================================================
  array[0]=ptr1;
  array[1]=ptr2;

  // ======================================================================
  // std::cout<<"array[0]: "<<array[0]<<std::endl;
  // std::cout<<"array[1]: "<<array[1]<<std::endl;
  // array[0]: 0x7ffc486b24f8
  // array[1]: 0x7ffc486b24fc

  // std::cout<<"*array[0]: "<<*array[0]<<std::endl;
  // std::cout<<"*array[1]: "<<*array[1]<<std::endl;
  // *array[0]: 1
  // *array[1]: 2

  // std::cout<<"**array[0]: "<<**array[0]<<std::endl;
  // std::cout<<"**array[1]: "<<**array[1]<<std::endl;

  return 0;
}
