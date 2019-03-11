// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/yk/018_array/005_concatenate_string && \
// g++ \
// -std=c++11 \
// -o main \
// /mnt/1T-5e7/mycodehtml/p_lang/cpp/yk/018_array/005_concatenate_string/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
  // ======================================================================
  char src_string[100]="C++ programming is very interesting!!!";
  char dest_string[100];
  char dest2_string[100];

  char string[30]="science";

  // ======================================================================
  strcpy(dest_string,src_string);
  std::cout<<"dest_string: "<<dest_string<<std::endl;
  // dest_string: C++ programming is very interesting!!!

  // ======================================================================
  strcat(dest_string,string);
  std::cout<<"dest_string: "<<dest_string<<std::endl;
  // dest_string: C++ programming is very interesting!!!science
}
