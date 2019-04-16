// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/003_Better_practice_of_cin_Cin_getline_function && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/003_Better_practice_of_cin_Cin_getline_function/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>

// ======================================================================
int main()
{
  char name[255];

  // ======================================================================
  std::cout << "Enter your name: ";

  // ======================================================================
  // This call to cin.getline() will read up to 254 characters into name 
  // (leaving room for the null terminator!). 
  // Any excess characters will be discarded. 
  // In this way, we guarantee that we will not overflow the array!
  std::cin.getline(name,255);

  // ======================================================================
  std::cout << "You entered: " << name << '\n';

  // ======================================================================
  return 0;
}
