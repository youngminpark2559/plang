// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/yk/018_array/002_how_to_store_string && \
// g++ \
// -std=c++11 \
// -o main \
// /mnt/1T-5e7/mycodehtml/p_lang/cpp/yk/018_array/002_how_to_store_string/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
  // ======================================================================
  // String can be stored in "char type array" or "string class object"

  // Here, we will see how to store string into array

  // ======================================================================
  // Way 1 (convenient)
  // c string: (30,) array which stores char type values
  char string[30]="computer";
  // NULL character is automatically inserted into array string

  // c len_string: length of array string
  auto len_string=(sizeof(string)/sizeof(*string));
  std::cout<<"len_string: "<<len_string<<std::endl;
  // len_string: 30

  for(int i=0;i<len_string;i++)
  {
    std::cout<<string[i];
  }
  std::cout<<std::endl;
  // computer                      
  
  // ======================================================================
  // Way 2 (inconvenient)
  // c string2: (30,) array which stores char type values
  char string2[30]={'c','o','m','p','u','t','e','r','\0'};
  // You need to manually insert NUL character at the end of array string2

  auto len_string2=(sizeof(string2)/sizeof(*string2));
  std::cout<<"len_string2: "<<len_string2<<std::endl;
  // len_string2: 30

  for(int i=0;i<len_string2;i++)
  {
    std::cout<<string2[i];
  }
  // computer                      

  return 0;
}
