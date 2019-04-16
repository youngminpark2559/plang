// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/004_Reference_variables_must_be_initialized && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/004_Reference_variables_must_be_initialized/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <cstring>
using namespace std;

// ================================================================================
int main()
{
  int value=5;

  // ================================================================================
  // c ref: reference variable
  // which references to r value int variable value
  int &ref=value; 
  
  // ================================================================================
  // c invalidRef: reference variable 
  int &invalidRef; // invalid, needs to reference something
  
  return 0;
}
