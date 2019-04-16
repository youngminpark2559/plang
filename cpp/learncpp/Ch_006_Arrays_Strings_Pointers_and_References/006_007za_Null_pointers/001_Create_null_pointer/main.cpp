// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007za_Null_pointers/001_Create_null_pointer && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007za_Null_pointers/001_Create_null_pointer/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include<iostream>
 
int main()
{
  // c ptr: pointer variable which stores address value of float variable
  // c ptr: ptr is null pointer, which points to nothing
  float *ptr{0};

  std::cout<<"ptr "<<ptr<<std::endl;
  // 0

  // std::cout<<"*ptr "<<*ptr<<std::endl;
  // <blank>
  
  // ======================================================================
  // c ptr2: ptr2 is not initialzed. It doesn't mean ptr2 is null pointer
  // ptr2 points to garbage value stored in garbage variable
  float *ptr2; 

  std::cout<<"ptr2 "<<ptr2<<std::endl;
  // 0x4007f0

  // Use dereference operator
  std::cout<<"*ptr2 "<<*ptr2<<std::endl;
  // -2.4306e-33

  // ================================================================================
  // ptr2 is now a null pointer
  ptr2=0; 

  std::cout<<"ptr2 "<<ptr2<<std::endl;
  // 0

  return 0;
}
