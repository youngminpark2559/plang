// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_001_Arrays_Part_1/002_array_data_types && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_001_Arrays_Part_1/002_array_data_types/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
 
int main()
{
  // c array: (3,) array which stores double values
  double array[3];

  // ================================================================================
  array[0]=2.0;
  array[1]=3.0;
  array[2]=4.3;

  // ================================================================================
  float averaged=(array[0]+array[1]+array[2])/3;
  std::cout<<"averaged: "<<averaged<<std::endl;
  // 3.1

  return 0;
}
