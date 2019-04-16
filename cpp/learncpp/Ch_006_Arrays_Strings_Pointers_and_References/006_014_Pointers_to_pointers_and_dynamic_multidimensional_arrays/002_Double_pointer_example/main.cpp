// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_014_Pointers_to_pointers_and_dynamic_multidimensional_arrays/002_Double_pointer_example && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_014_Pointers_to_pointers_and_dynamic_multidimensional_arrays/002_Double_pointer_example/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
 
int main()
{
  // c value: int variable
  int value=5;
  
  // c ptr: pointer variable
  int *ptr=&value;
  // Dereference pointer variable ptr
  std::cout<<*ptr;

  // ======================================================================
  // c ptrptr: double pointer variable
  int **ptrptr=&ptr;

  // First dereference to get pointer to int, 
  // second dereference to get int value
  std::cout<<**ptrptr;

  // ======================================================================
  // Note that you can not set a pointer to a pointer directly to a value:
  // int value = 5;
  // int **ptrptr = &&value; // not valid

  // ======================================================================
  // A pointer to a pointer can be set to null:
  // int **ptrptr = nullptr; // use 0 instead prior to C++11

  return 0;
}
