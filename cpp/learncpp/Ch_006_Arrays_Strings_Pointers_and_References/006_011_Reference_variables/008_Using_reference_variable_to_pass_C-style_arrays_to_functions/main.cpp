// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/008_Using_reference_variable_to_pass_C-style_arrays_to_functions && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_011_Reference_variables/008_Using_reference_variable_to_pass_C-style_arrays_to_functions/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>

// ================================================================================ 
// Note: You need to specify the array size in the function declaration
void printElements(int (&arr)[4])
{
  // we can now do this since the array won't decay
  int length{sizeof(arr)/sizeof(arr[0])};
  
  for(int i{0};i<length;++i)
  {
    std::cout<<arr[i]<<std::endl;
  }
}

// ================================================================================
int main()
{
  // c arr: array which stores int values
  int arr[]{99,20,14,80};
  // std::cout<<"arr: "<<arr<<std::endl;
  // arr: 0x7ffe7cf77970

  // ================================================================================
  // If you pass arr,
  // arr is automatically converted 
  // into reference variable in the parameter
  printElements(arr);

  return 0;
}
