// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_016_An_introduction_to_std_vector/003_Assign_values_to_a_std_vector_using_an_initializer-list && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_016_An_introduction_to_std_vector/003_Assign_values_to_a_std_vector_using_an_initializer-list/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <cstring>
#include <vector>

// ================================================================================
using namespace std;

// ================================================================================
int main()
{
  // no need to specify length at initialization
  // c array: vector instance which stores int values
  std::vector<int> array;

  // ================================================================================
  array={0,1,2,3,4}; // okay, array length is now 5

  array={9,8,7}; // okay, array length is now 3

  // ================================================================================
  return 0;
}
