// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/008_Insert_value_into_variable_via_pointer_variable && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/008_Insert_value_into_variable_via_pointer_variable/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>
#include <typeinfo>

// ======================================================================
int main()
{
  // ======================================================================
  int value=5;
  
  // c ptr: pointer variable which stores address value of variable value
  int *ptr=&value;

  // ======================================================================
  // Use dereference operator on pointer variable ptr
  // And you insert 7 into variable value
  *ptr=7;

  std::cout<<"value: "<<value <<std::endl;
  // 7
  
  return 0;
}
