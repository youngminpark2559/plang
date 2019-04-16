// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/001_Address_of_operator && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/001_Address_of_operator/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>

// ================================================================================
int main()
{
  int x=5;

  // ================================================================================
  // print the value in variable x
  std::cout<<"x: "<<x<<std::endl;
  // 5

  // ================================================================================
  // print the memory address of variable x by using address-of operator &
  // Address-of operator is unary (&var1), whereas the "bitwise-and" operator is binary (var1&&var2)
  std::cout<<"&x: "<<&x<<std::endl;
  // 0x7ffe9bcbc994

  return 0;
}
