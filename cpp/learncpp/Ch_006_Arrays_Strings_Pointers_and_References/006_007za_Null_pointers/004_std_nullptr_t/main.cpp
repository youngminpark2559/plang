// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007za_Null_pointers/003_nullptr_in_cpp_11 && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007za_Null_pointers/003_nullptr_in_cpp_11/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
#include <cstddef> // for NULL

// int main()
// {
//     // note: ptr is still an integer pointer, 
//     // just set to a null value
//     int *ptr { nullptr }; 
 
//     return 0;
// }

void print(int x)
{
	std::cout << "print(int): " << x << '\n';
}
 
void print(int *x)
{
	if (!x)
		std::cout << "print(int*): null\n";
	else
		std::cout << "print(int*): " << *x << '\n';
}
 
int main()
{
	int *x { nullptr };
	
    print(x); // calls print(int*)
    // print(int*): null
 
	print(nullptr); // calls print(int*) as desired
    // print(int*): null
    
    // Best practice: With C++11, 
    // use nullptr to initialize your pointers to a null value.

	return 0;
}
