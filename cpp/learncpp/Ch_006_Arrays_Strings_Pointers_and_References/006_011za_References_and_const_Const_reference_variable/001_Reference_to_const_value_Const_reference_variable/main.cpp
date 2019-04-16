// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011za_References_and_const_Const_reference_variable/001_Reference_to_const_value_Const_reference_variable && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011za_References_and_const_Const_reference_variable/001_Reference_to_const_value_Const_reference_variable/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
  // c value: const int variable
  const int value=5;
  std::cout<<"&value: "<<&value<<std::endl;
  // &value: 0x7ffde0751a1c
  
  // c &ref: reference variable
  // which references to const int variable
  const int &ref=value; // ref is a reference to const value
  std::cout<<"ref: "<<ref<<std::endl;
  // ref: 5

  std::cout<<"&ref: "<<&ref<<std::endl;
  // &ref: 0x7ffde0751a1c

  return 0;
}

