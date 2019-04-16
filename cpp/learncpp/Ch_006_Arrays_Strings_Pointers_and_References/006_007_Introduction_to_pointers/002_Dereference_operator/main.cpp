// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/002_Dereference_operator && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/002_Dereference_operator/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>

// ================================================================================
int main()
{
  int x=5;

  // ======================================================================
  std::cout<<"x: "<<x<<std::endl;
  // 5
  
  // Use address-of operator & on variable x
  std::cout<<"&x: "<<&x<<std::endl;
  // 0x7ffc99425884

  // ======================================================================
  // Dereference operator is unary (*var1), whereas the multiplication operator is binary (var1*var2)
  // The dereference operator allows us to "access the value" at a particular "address":
  // *address_of_variable ---> value in variable
  std::cout<<"*&x: "<<*&x<<std::endl;
  // 5

  return 0;
}
