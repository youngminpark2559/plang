// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_008_Pointers_and_arrays/005_Pass_an_address && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_008_Pointers_and_arrays/005_Pass_an_address/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
// Parameter ptr stores a copy of the address of the array
void changeArray(int *ptr)
{
  // so changing an array element changes the array in main()
  *ptr=5;
}
 
int main()
{
  // c array: array which stores int values
  int array[]={1,1,2,3,5,8,13,21};
  std::cout<<"array[0]: "<<array[0]<<std::endl;
  // array[0]: 1

  std::cout<<"array: "<<array<<std::endl;
  // array: 0x7ffdc11b67d0
  
  // ======================================================================
  // When array[] is passed, array decays into a pointer variable
  // whic stores the address of the first element of array
  changeArray(array);

  std::cout<<"array[0]: "<<array[0]<<std::endl;
  // array[0]: 5

  return 0;
}
