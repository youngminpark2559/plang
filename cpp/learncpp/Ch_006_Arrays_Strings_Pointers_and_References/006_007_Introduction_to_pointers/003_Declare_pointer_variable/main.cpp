// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/003_Declare_pointer_variable && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_007_Introduction_to_pointers/003_Declare_pointer_variable/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>

// ================================================================================
// When function returns a pointer variable, return type should have asterisk
int* doSomething();

int main()
{
  // ======================================================================
  // Following asterisk is not a dereference operator. 
  // Following asterisk is used to declare "pointer variable" as "pointer declaration operator"

  int *iPtr; // Best practice
  double *dPtr;

  // ======================================================================
  int* iPtr2; // Not favored
  int * iPtr3; // Not favored

  // ======================================================================
  // Create 2 pointer variables
  int *iPtr4,*iPtr5;

  // ======================================================================
  // Create one pointer variable, one int variable
  int* iPtr6,iPtr7;

  return 0;
}

