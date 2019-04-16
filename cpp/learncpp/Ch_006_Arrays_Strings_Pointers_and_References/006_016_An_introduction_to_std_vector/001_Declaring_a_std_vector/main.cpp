// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_016_An_introduction_to_std_vector/001_Declaring_a_std_vector && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_016_An_introduction_to_std_vector/001_Declaring_a_std_vector/main.cpp && \
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

  // use initializer list to initialize array
  // c array2: vector instance which stores int values
  std::vector<int> array2={9,7,5,3,1};

  // use uniform initialization to initialize array (C++11 onward)
  // c array3: vector instance which stores int values
  std::vector<int> array3{9,7,5,3,1};

  return 0;
}
