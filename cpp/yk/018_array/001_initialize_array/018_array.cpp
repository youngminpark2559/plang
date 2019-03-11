// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/yk/018_array/001_initialize_array && \
// g++ \
// -std=c++11 \
// -o 018_array \
// /mnt/1T-5e7/mycodehtml/p_lang/cpp/yk/018_array/001_initialize_array/018_array.cpp && \
// rm e.l && ./018_array 2>&1 | tee -a e.l && code e.l

#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
  // ======================================================================
  // ---------- Way1 to initialize array ----------------------------------
  // c s: (3,) array which stores int values
  int s[3]={10,20,30};

  // c len_s: length of array s
  auto len_s=(sizeof(s)/sizeof(*s));
  // std::cout<<"len_s: "<<len_s<<std::endl;
  // len_s: 3

  for(int i=0;i<len_s;i++)
  {
    std::cout<<s[i]<<std::endl;
  }
  // 10
  // 20
  // 30

  // ======================================================================
  // ---------- Way2 to initialize array ----------------------------------
  // c s: (3,) array which stores int values
  int s2[3]={0,};

  auto len_s2=(sizeof(s)/sizeof(*s));

  for(int i=0;i<len_s2;i++)
  {
    std::cout<<s2[i]<<std::endl;
  }
  // 0
  // 0
  // 0

  return 0;
}
