// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/yk/018_array/006_compare_string && \
// g++ \
// -std=c++11 \
// -o main \
// /mnt/1T-5e7/mycodehtml/p_lang/cpp/yk/018_array/006_compare_string/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
  // ======================================================================
  char string1[10]="abc";
  char string2[10]="def";

  // strings are compared based on ASCII code
  auto ret1=strcmp(string1,string2);
  std::cout<<"ret1: "<<ret1<<std::endl;
  // ret1: -3

  // <: -
  // >: +
  // =: 0
}
