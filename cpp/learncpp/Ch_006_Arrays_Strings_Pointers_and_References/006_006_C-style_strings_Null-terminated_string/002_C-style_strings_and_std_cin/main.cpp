// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/002_C-style_strings_and_std_cin && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/002_C-style_strings_and_std_cin/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>
 
int main()
{
  // c name: (255,) arrary which stores char values
  char name[255];

  // ======================================================================
  std::cout<<"Enter your name: ";

  // ======================================================================
  std::cin>>name;

  // ======================================================================
  std::cout<<"You entered: "<<name<<'\n';

  return 0;
}
