// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/007_Reference_variable_as_function_parameter && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/007_Reference_variable_as_function_parameter/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>

// ================================================================================ 
// ref is a reference to the argument passed in, not a copy
void changeN(int &ref)
{
	ref=6;
}

// ================================================================================ 
int main()
{
	int n=5;
  
  // ================================================================================
  std::cout<<"n: "<<n<<std::endl;
  // n: 5
 
  // ================================================================================
	// note that this argument does not need to be a reference
  changeN(n);
  
  // ================================================================================
  std::cout<<"n: "<<n<<std::endl;
  // n: 6

  // ================================================================================
	return 0;
}
