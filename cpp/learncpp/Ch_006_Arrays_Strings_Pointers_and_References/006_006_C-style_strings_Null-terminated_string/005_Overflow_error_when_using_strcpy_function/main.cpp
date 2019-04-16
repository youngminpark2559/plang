// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/005_Overflow_error_when_using_strcpy_function && \
// g++ \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/005_Overflow_error_when_using_strcpy_function/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <cstring>

// ======================================================================
int main()
{
    char source[]="Copy this!";

    // note that the length of dest is only 5 chars!
    char dest[5];

    // overflow!
    strcpy(dest,source);


    std::cout<<dest;
 
    return 0;
}
