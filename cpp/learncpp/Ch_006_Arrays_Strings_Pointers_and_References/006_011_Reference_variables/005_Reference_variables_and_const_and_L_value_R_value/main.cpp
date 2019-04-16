// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/005_Reference_variables_and_const_and_L_value_R_value && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/005_Reference_variables_and_const_and_L_value_R_value/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <cstring>
using namespace std;

// ================================================================================
int main()
{
  int x = 5;

  // ================================================================================
  // c ref1: reference variable
  // which references to r value int variable x
  int &ref1 = x; // okay, x is an non-const l-value
  
  // ================================================================================
  // c y: const int variable
  const int y = 7;

  // ================================================================================
  // c ref2: reference variable
  // which references to r value const int variable x
  // but it's invalid
  int &ref2 = y; // not okay, y is a const l-value
  
  // ================================================================================
  int &ref3 = 6; // not okay, 6 is an r-value
  
  return 0;
}
