// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_003_Arrays_and_loops/004_Find_max_value_from_array_using_for_loop && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_003_Arrays_and_loops/004_Find_max_value_from_array_using_for_loop/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

//======================================================================
#include <iostream>
#include <cstring>
#include <iterator>

//======================================================================
int main()
{
  // c scores: array which stores int values
  int scores[]={84,92,76,81,56};

  // ======================================================================
  // requires C++17 and <iterator> header
  // const int numStudents=std::size(scores);
  
  // use this instead if not C++17 capable
  // c numStudents: number of students
  const int numStudents=sizeof(scores)/sizeof(scores[0]);
  // std::cout<<"numStudents: "<<numStudents<<std::endl;
  // 5

  // ======================================================================
  int maxScore=0; // keep track of our largest score

  for(int student=0;student<=numStudents;++student)
  {
    std::cout<<"scores[student]: "<<scores[student]<<std::endl;
    if(scores[student]>maxScore)
    {
      maxScore=scores[student];
      std::cout<<"maxScore: "<<maxScore<<std::endl;
      // 84
      // 92
      // 32765
      // 32765
    }
    // else
    // {
    //   continue;
    // }
  }
    
  // ======================================================================
  std::cout<<"maxScore: "<<maxScore<<std::endl;

  return 0;
}
