// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/001_References_to_non-const_values_Reference_to_operator && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/001_References_to_non-const_values_Reference_to_operator/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <cstring>
using namespace std;

// ================================================================================ 
int main()
{
  // c value: int variable
  int value=5;
  std::cout<<"&value: "<<&value<<std::endl;
  // &value: 0x7fff25dfc0dc

  // ================================================================================
  // c ref: reference variable
  // "ref" references to "value"
  // "ref" is an alias of "value"
  int &ref=value;

  // ================================================================================
  std::cout<<"ref: "<<ref<<std::endl;
  // ref: 5

  std::cout<<"&ref: "<<&ref<<std::endl;
  // &ref: 0x7fff25dfc0dc
  
  return 0;
}