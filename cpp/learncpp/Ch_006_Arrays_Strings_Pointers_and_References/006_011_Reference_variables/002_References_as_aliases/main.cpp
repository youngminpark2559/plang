// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/002_References_as_aliases && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/002_References_as_aliases/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
 
// ================================================================================
int main()
{
  int value=5; // normal integer
  int &ref=value; // reference to variable value

  value=6; // value is now 6
  ref=7; // value is now 7

  std::cout<<value; // prints 7
  ++ref;
  std::cout<<value; // prints 8

  return 0;
}
