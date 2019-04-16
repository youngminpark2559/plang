// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_008_Pointers_and_arrays/001_Array_decay && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_008_Pointers_and_arrays/001_Array_decay/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
int main()
{
  // The fixed array will decay (be implicitly converted) 
  // into a pointer variable 
  // which stores an address of the first element of the array
  
  // ======================================================================
  // c array: (5,) array which stores int values
  int array[5]={9,7,5,3,1};

  // ======================================================================
  // print address of the array's first element
  std::cout<<"&array[0]: "<<&array[0]<<std::endl;
  // &array[0]: 0x7ffc0aba3f70

  // ======================================================================
  // print the value which array stores
  std::cout<<"array: "<<array<<std::endl;
  // array: 0x7ffc0aba3f70

  // ======================================================================
  return 0;
}

