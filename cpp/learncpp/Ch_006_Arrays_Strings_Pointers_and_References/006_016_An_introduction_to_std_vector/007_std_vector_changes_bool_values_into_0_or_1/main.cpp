// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_016_An_introduction_to_std_vector/007_Special_implementation_for_std_vector_of_type_bool_that_will_compact_8_booleans_into_a_byte && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_016_An_introduction_to_std_vector/007_Special_implementation_for_std_vector_of_type_bool_that_will_compact_8_booleans_into_a_byte/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <vector>
#include <iostream>

// ================================================================================ 
int main()
{
  // c array: vector which stores bool values
  std::vector<bool> array{true,false,false,true,true};
  std::cout<<"array.size(): "<<array.size()<<std::endl;
  // array.size(): 5

  // ================================================================================
  for(auto const &element:array)
  {
    std::cout<<"element: "<<element<<std::endl;
  }
  // element: 1
  // element: 0
  // element: 0
  // element: 1
  // element: 1

  return 0;
}
