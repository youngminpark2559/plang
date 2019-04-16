// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/006_References_can_not_be_reassigned && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/006_References_can_not_be_reassigned/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <cstring>
using namespace std;

// ================================================================================
int main()
{
  // ================================================================================
  int value1=5;
  int value2=6;
  
  // ================================================================================
  // okay, ref is now an alias for value1
  int &ref=value1;
  std::cout<<"ref: "<<ref<<std::endl;
  // ref: 5

  // ================================================================================
  // assigns 6 (the value of value2) to value1 -- 
  // does NOT change the reference!
  ref=value2;
  std::cout<<"ref: "<<ref<<std::endl;
  // ref: 6
  
  return 0;
}
