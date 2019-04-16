// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_008_Pointers_and_arrays/004_Fixed_array_type_for_parameter_of_function && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_008_Pointers_and_arrays/004_Fixed_array_type_for_parameter_of_function/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
// Note that this happens even if the parameter is declared as a fixed array:
// C++ will implicitly convert parameter array[] to *array
void printSize(int array[])
{
  // array is treated as a pointer here, not a fixed array
  // prints the size of a pointer, not the size of the array!
  std::cout<<"sizeof(array): "<<sizeof(array)<<std::endl;
}

// ======================================================================
int main()
{
  // c array: array which stores int values
  int array[]={1,1,2,3,5,8,13,21};

  // ======================================================================
  // will print sizeof(int) * array length
  std::cout<<"sizeof(array): "<<sizeof(array)<<std::endl;

  // ======================================================================
  // the array argument decays into a pointer variable here
  printSize(array);

  return 0;
}

// ======================================================================
// In the above example, 
// C++ implicitly converts the array syntax ([]) which parameter has
// into the pointer syntax (*). 

// It means the following two function declarations are identical:
// void printSize(int array[]);
// void printSize(int *array);

// Some programmers prefer using the [] syntax 
// because it makes it clear 
// that the function is expecting an array, 
// not just a pointer to a value.

// We lightly recommend using the pointer syntax, 
// because it makes it clear 
// that the parameter is being treated as a pointer, not a fixed array, 
// and that certain operations, 
// such as sizeof(), will operate as if the parameter is a pointer.

