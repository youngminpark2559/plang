// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/007_strlen_function && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_006_C-style_strings_Null-terminated_string/007_strlen_function/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include<iostream>
#include<cstring>
#include<iterator> // for std::size
 
int main()
{
  // c name: (20,) array which stores char values
  // only use 5 characters (4 letters + null terminator)
  char name[20]="Alex";

  // ======================================================================
  std::cout<<"name: "<<name<<std::endl;
  // name: Alex

  // ======================================================================
  std::cout<<"strlen(name): "<<strlen(name)<<std::endl;
  // strlen(name): 4
  
  // ======================================================================
  // C++17
  // std::cout<<"std::size(name): "<<std::size(name)<<std::endl;

  // C++11
  std::cout<<"sizeof(name)/sizeof(name[0]): "<<sizeof(name)/sizeof(name[0])<<std::endl;
  // sizeof(name)/sizeof(name[0]): 20

  return 0;
}

