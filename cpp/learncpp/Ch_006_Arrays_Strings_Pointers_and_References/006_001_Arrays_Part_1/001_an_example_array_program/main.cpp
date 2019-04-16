// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_001_Arrays_Part_1/001_an_example_array_program && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_001_Arrays_Part_1/001_an_example_array_program/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
 
int main()
{
  // c prime: array 5 length which stores int values
  int prime[5];

  prime[0]=2;
  prime[1]=3;
  prime[2]=5;
  prime[3]=7;
  prime[4]=11;

  // ================================================================================
  std::cout<<"prime[0]: "<<prime[0]<<std::endl;
  // 2

  int summed=prime[0]+prime[1]+prime[2]+prime[3]+prime[4];
  std::cout<<"summed: "<<summed<<std::endl;
  // 28

  return 0;
}
