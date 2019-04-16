// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/003_Initializing_a_dynamically_allocated_variable && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_009_Dynamic_memory_allocation_with_new_and_delete/003_Initializing_a_dynamically_allocated_variable/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
  // use direct initialization
  int *ptr1 = new int(5);
  std::cout<<"ptr1: "<<ptr1<<std::endl;
  std::cout<<"&ptr1: "<<&ptr1<<std::endl;
  std::cout<<"*ptr1: "<<*ptr1<<std::endl;
  // ptr1: 0x1177c20
  // &ptr1: 0x7ffcba52eab8
  // *ptr1: 5

  // ======================================================================
  // use uniform initialization
  int *ptr2 = new int{6}; 
  std::cout<<"ptr2: "<<ptr2<<std::endl;
  std::cout<<"&ptr2: "<<&ptr2<<std::endl;
  std::cout<<"*ptr2: "<<*ptr2<<std::endl;
  // ptr2: 0x1178c50
  // &ptr2: 0x7ffcba52eac0
  // *ptr2: 6

  return 0;
}
