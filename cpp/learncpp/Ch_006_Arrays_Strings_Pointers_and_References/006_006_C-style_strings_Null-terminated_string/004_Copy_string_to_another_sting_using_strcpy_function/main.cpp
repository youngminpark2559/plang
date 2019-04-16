// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/004_Copy_string_to_another_sting_using_strcpy_function && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/004_Copy_string_to_another_sting_using_strcpy_function/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <cstring>

// ======================================================================
int main()
{
  char source[]="Copy this!";
  char dest[50];

  // ======================================================================
  strcpy(dest,source);

  // ======================================================================
  std::cout<<dest;

  return 0;
}
