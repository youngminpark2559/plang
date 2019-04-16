// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/006_strcpy_s_function && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/006_strcpy_s_function/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#define __STDC_WANT_LIB_EXT1__ 1
#include <iostream>
#include <cstring> // for strcpy_s
using namespace std;

// ======================================================================
int main()
{
  char source[]="Copy this!";

  // note that the length of dest is only 5 chars!
  char dest[5];

  // An runtime error will occur in debug mode
  strcpy_s(dest,5,source);

  std::cout<<dest;

  return 0;
}
