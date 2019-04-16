// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/009_Reference_variable_for_shortcuts && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/009_Reference_variable_for_shortcuts/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>

// ================================================================================ 
struct Something
{
    int value1;
    float value2;
};

// ================================================================================ 
struct Other
{
    Something something;
    int otherValue;
};

// ================================================================================
int main()
{
  Other other;

  int &ref = other.something.value1;
  // ref can now be used in place of other.something.value1


  other.something.value1 = 5;
  ref = 5;


  return 0;
}
