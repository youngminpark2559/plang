// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/006_Address_of_operator_returns_pointer_than_literal_address_value && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/006_Address_of_operator_returns_pointer_than_literal_address_value/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <typeinfo>

// ================================================================================
int main()
{
  int x=4;
    
  std::cout<<"typeid(&x).name(): "<<typeid(&x).name()<<std::endl;
  // Pi
 
	return 0;
}
