// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007za_Null_pointers/003_nullptr_in_cpp_11 && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007za_Null_pointers/003_nullptr_in_cpp_11/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>
#include <cstddef> // for NULL

// ======================================================================
void print(int x)
{
	std::cout<<"print(int x) is called"<<std::endl;
	std::cout<<"x: "<<x<<std::endl;
}

// ======================================================================
void print(int *x)
{
	std::cout<<"print(int *x) is called"<<std::endl;

	// ======================================================================
	if(!x) // passed pointer variable x has null value
	{
		std::cout<<"passed pointer variable x has null value"<<std::endl;
	}
	else // passed pointer variable x has address
	{
		std::cout<<"passed pointer variable x has address"<<std::endl;
		std::cout<<"*x: "<<*x<<std::endl;
	}
}

// ======================================================================
int main()
{
	int *x{nullptr};
	
	// ======================================================================
  print(x); // calls print(int*)
	// print(int *x) is called
	// passed pointer variable x has null value
	
	// ======================================================================
	print(nullptr); // calls print(int*) as desired
	// print(int *x) is called
	// passed pointer variable x has null value
  
	// ======================================================================
	// Best practice: With C++11, 
	// use nullptr to initialize your pointers to a null value.

	return 0;
}
