// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007za_Null_pointers/002_Check_null_or_non_null_from_pointer_variable && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007za_Null_pointers/002_Check_null_or_non_null_from_pointer_variable/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
int main()
{ 
  // c ptr: pointer variable which stores address of float variable
  // c ptr: currently ptr stores 0, which means ptr points to nothing
  double *ptr{0};

  // ======================================================================
  // Pointer varialble ptr is converted into False if ptr stores 0 (null), 
  if(ptr) // ptr stores address
      std::cout<<"ptr is storing address of double variable"<<std::endl;
  else // ptr stores 0
      std::cout<<"ptr is a null pointer."<<std::endl;
  
  // ======================================================================
  // Best practice: Initialize your pointers by 0 (null)
  // if you’re not giving pointer variables specific address.

  return 0;
}
