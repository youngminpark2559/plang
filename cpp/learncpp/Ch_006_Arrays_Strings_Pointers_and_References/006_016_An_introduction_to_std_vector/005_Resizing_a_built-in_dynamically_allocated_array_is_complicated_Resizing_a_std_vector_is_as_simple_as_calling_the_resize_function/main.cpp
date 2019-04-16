// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_016_An_introduction_to_std_vector/005_Resizing_a_built-in_dynamically_allocated_array_is_complicated_Resizing_a_std_vector_is_as_simple_as_calling_the_resize_function && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_016_An_introduction_to_std_vector/005_Resizing_a_built-in_dynamically_allocated_array_is_complicated_Resizing_a_std_vector_is_as_simple_as_calling_the_resize_function/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <vector>
#include <iostream>

// ================================================================================
int main()
{
  // c array: vector which stores int values
  std::vector<int> array{0,1,2};

  // ================================================================================
  // Resize vector array into length 5
  array.resize(5); // set size to 5

  // ================================================================================
  std::cout<<"array.size(): "<<array.size()<<std::endl;
  // array.size(): 5

  // ================================================================================
  // Iterate array
  // Use reference variable element
  // element is an alias of int variables which stores int values
  for(auto const &element:array)
  {
    std::cout<<"element: "<<element<<std::endl;
  }
  // element: 0
  // element: 1
  // element: 2
  // element: 0
  // element: 0

  return 0;
}
