// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/004_How_to_assign_address_into_pointer_variable && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/004_How_to_assign_address_into_pointer_variable/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>

// ================================================================================
int main()
{
  // ======================================================================
  int value=5;

  // ======================================================================
  // Pointer variable stores an address values of a variable.
  // So, you first need to obtain variable's address value by using address-of operator
  // And you can assign obtained address value into the pointer variable
  int *ptr=&value;

  return 0;
}
