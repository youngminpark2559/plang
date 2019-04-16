// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_008_Pointers_and_arrays/003_Pass_fixed_arrays_to_functions && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_008_Pointers_and_arrays/003_Pass_fixed_arrays_to_functions/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
void printSize(int *array)
{
  // array is treated as a pointer here
  // prints the size of a pointer, not the size of the array!
  std::cout<<"sizeof(array): "<<sizeof(array)<<std::endl;
}

// ======================================================================
int main()
{
  // c array: array which stores int values
  int array[]={1,1,2,3,5,8,13,21};

  // ======================================================================
  // This will print <sizeof(int) * array length>
  std::cout<<"sizeof(array): "<<sizeof(array)<<std::endl;
  // 32=4*8

  // ======================================================================
  // Copying large arrays is computationally expensive
  // So, C++ does not copy an array when an array is passed into a function. 

  // When passing an array as an argument into a function, 
  // first, a fixed array decays into a pointer variable, 
  // which stores the address of the first element
  // second, that pointer variable is passed to the function
  printSize(array); 
  // 8

  // ======================================================================
  return 0;
}
