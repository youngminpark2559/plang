// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/yk/018_array/003_find_length_of_string && \
// g++ \
// -std=c++11 \
// -o main \
// /mnt/1T-5e7/mycodehtml/p_lang/cpp/yk/018_array/003_find_length_of_string/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
  // ======================================================================
  // c string: (30,) array which stores char values
  char string[30]="science";
  std::cout<<"string: "<<string<<std::endl;
  // string: science

  // ======================================================================
  std::cout<<"strlen(string): "<<strlen(string)<<std::endl;
  // 7

  return 0;
}
