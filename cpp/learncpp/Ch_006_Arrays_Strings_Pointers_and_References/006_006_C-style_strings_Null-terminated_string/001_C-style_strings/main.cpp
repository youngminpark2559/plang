// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/001_C-style_strings && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/001_C-style_strings/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>
#include <iterator> // for std::size

// ======================================================================
int main()
{
  // c myString: array which stores char values
  char myString[]="string";

  // ======================================================================
  // const int length=std::size(myString);
  
  // c length: int variable
  const int length=sizeof(myString)/sizeof(myString[0]);

  // ======================================================================
  std::cout<<"length: "<<length<<std::endl;
  // length: 7

  // ======================================================================
  for(int index=0;index<length;++index)
  {
    std::cout<<"myString[index]: "<<myString[index]<<std::endl;

    std::cout<<"static_cast<int>(myString[index]): "<<static_cast<int>(myString[index])<<std::endl;
    
    std::cout<<"";

    // myString[index]: s
    // static_cast<int>(myString[index]): 115

    // myString[index]: t
    // static_cast<int>(myString[index]): 116

    // myString[index]: r
    // static_cast<int>(myString[index]): 114

    // myString[index]: i
    // static_cast<int>(myString[index]): 105

    // myString[index]: n
    // static_cast<int>(myString[index]): 110

    // myString[index]: g
    // static_cast<int>(myString[index]): 103

    // myString[index]:  
    // static_cast<int>(myString[index]): 0
  }

  return 0;
}