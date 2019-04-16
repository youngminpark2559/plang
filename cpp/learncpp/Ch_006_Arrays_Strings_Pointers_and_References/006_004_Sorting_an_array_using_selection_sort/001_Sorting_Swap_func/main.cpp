// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_004_Sorting_an_array_using_selection_sort/001_Sorting_Swap_func && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_004_Sorting_an_array_using_selection_sort/001_Sorting_Swap_func/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
// #include<algorithm> // for std::swap
#include<utility> // for std::swap in C++ 11
#include<iostream>
 
int main()
{
  int x=2;
  int y=4;
  std::cout<<"x: "<<x<<std::endl;
  std::cout<<"y: "<<y<<std::endl;
  // x: 2
  // y: 4

  // ======================================================================
  std::swap(x,y);
  
  // ======================================================================
  std::cout<<"x: "<<x<<std::endl;
  std::cout<<"y: "<<y<<std::endl;
  // x: 4
  // y: 2
}
