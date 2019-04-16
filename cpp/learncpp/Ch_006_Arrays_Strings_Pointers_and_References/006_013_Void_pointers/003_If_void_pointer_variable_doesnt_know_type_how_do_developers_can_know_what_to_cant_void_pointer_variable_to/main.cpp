// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_013_Void_pointers/003_If_void_pointer_variable_doesnt_know_type_how_do_developers_can_know_what_to_cant_void_pointer_variable_to && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_013_Void_pointers/003_If_void_pointer_variable_doesnt_know_type_how_do_developers_can_know_what_to_cant_void_pointer_variable_to/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>

// ================================================================================
// c Type: define enum Type
enum Type
{
  INT,
  FLOAT,
  CSTRING
};

// ================================================================================
// c printValue: define global function printValue(void *ptr,Type type)
// Parameter: void pointer, Type object
void printValue(void *ptr,Type type)
{
  switch (type)
  {
    case INT:
    {
      // cast to int pointer and dereference
      std::cout<<"*static_cast<int*>(ptr): "<<*static_cast<int*>(ptr)<<std::endl;
      break;
    }
    case FLOAT:
    {
      // cast to float pointer and dereference
      std::cout<<"*static_cast<float*>(ptr): "<<*static_cast<float*>(ptr)<<std::endl;
      break;
    }
    case CSTRING:
    {
      // cast to char pointer (no dereference)
      std::cout<<"static_cast<char*>(ptr): "<<static_cast<char*>(ptr)<<std::endl;

      // std::cout knows to treat char* as a C-style string
      // if we were to dereference the result, 
      // then we'd just print the single char that ptr is pointing to
      break;
    }
  }
}

// ================================================================================
int main()
{
  // c nValue: int variable
  int nValue=5;
  // c fValue: float variable
  float fValue=7.5;
  // c szValue: array which stores char values
  char szValue[]="Mollie";

  // ================================================================================
  // Pass address of nValue, instance Type
  printValue(&nValue,INT);
  // Pass address of fValue, instance Type
  printValue(&fValue,FLOAT);
  // Pass address of szValue, instance Type
  printValue(szValue,CSTRING);

  return 0;
}
