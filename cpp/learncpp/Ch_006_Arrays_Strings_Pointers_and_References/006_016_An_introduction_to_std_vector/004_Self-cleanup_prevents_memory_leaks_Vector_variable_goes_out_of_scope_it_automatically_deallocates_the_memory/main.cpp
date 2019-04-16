// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_016_An_introduction_to_std_vector/004_Self-cleanup_prevents_memory_leaks_Vector_variable_goes_out_of_scope_it_automatically_deallocates_the_memory && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_016_An_introduction_to_std_vector/004_Self-cleanup_prevents_memory_leaks_Vector_variable_goes_out_of_scope_it_automatically_deallocates_the_memory/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <cstring>
#include <vector>

// ================================================================================
using namespace std;

// ================================================================================
// Define global function doSomething(bool earlyExit)
void doSomething(bool earlyExit)
{
  // ================================================================================
  // c array: (5,) array which stores int values
  int *array=new int[5]{9,7,5,3,1};

  // ================================================================================
  if(earlyExit)
  {
    return;
  }

  // ================================================================================
  // do stuff here

  // ================================================================================
  // Delete array
  // If earlyExit is set to true, 
  // array will never be deallocated, 
  // and the memory will be leaked.
  // However, if array is a vector, this won’t happen, 
  // because the memory will be deallocated 
  // as soon as array goes out of scope 
  // (regardless of whether the function exits early or not). 
  // This makes std::vector much safer to use 
  // than doing your own memory allocation.
  delete[] array;
  std::cout<<"delete[] array"<<std::endl;
}

// ================================================================================
int main()
{
  // doSomething(true);
  doSomething(false);

  // ================================================================================
  return 0;
}
