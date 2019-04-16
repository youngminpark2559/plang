// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_016_An_introduction_to_std_vector/006_Vectors_may_be_resized_to_be_smaller && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_016_An_introduction_to_std_vector/006_Vectors_may_be_resized_to_be_smaller/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <vector>
#include <iostream>

// ================================================================================ 
int main()
{
  // c array: vector which stores int values
  std::vector<int> array{0,1,2,3,4};
  array.resize(3); // set length to 3

  std::cout<<"array.size(): "<<array.size()<<std::endl;
  // array.size(): 3

  for(auto const &element:array)
  {
    std::cout<<"element: "<<element<<std::endl;
  }
  // element: 0
  // element: 1
  // element: 2

  return 0;
}
