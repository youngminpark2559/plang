// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/010_References_vs_pointers && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/010_References_vs_pointers/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>

// ================================================================================
int main()
{
  int value = 5;
  int *const ptr = &value;
  int &ref = value;

  // Since *ptr and ref evaluate identically
  // as a result, the following two statements produce the same effect:
  *ptr = 5;
  ref = 5;

  // ================================================================================
  


  return 0;
}
