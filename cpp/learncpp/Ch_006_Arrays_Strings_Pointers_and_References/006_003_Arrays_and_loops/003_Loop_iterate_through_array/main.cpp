// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_003_Arrays_and_loops/003_Loop_iterate_through_array && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_003_Arrays_and_loops/003_Loop_iterate_through_array/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

//======================================================================
#include <iostream>
#include <cstring>
using namespace std;

//======================================================================
int main()
{
  // c scores: array which stores int values
  int scores[]={84,92,76,81,56};

  // ======================================================================
  // c numStudents: int variable
  // requires C++17 and <iterator>header
  // const int numStudents=std::size(scores);
  
  // use this instead if not C++17 capable
  int sizeof_scores_arr=sizeof(scores);
  // std::cout<<"sizeof_scores_arr: "<<sizeof_scores<<std::endl;
  // 20=4*5

  int sizeof_one_el=sizeof(scores[0]);
  // std::cout<<"sizeof_one_el: "<<sizeof_one_el<<std::endl;
  // 4
  
  const int numStudents=sizeof_scores_arr/sizeof_one_el; 
  // std::cout<<"numStudents: "<<numStudents<<std::endl;
  // 5
  
  // ======================================================================
  int totalScore=0;
  
  // Iterates up to number of students
  for(int student=0;student<numStudents;++student)
  {
    totalScore+=scores[student];
  }
  // 389

  // ======================================================================
  double totalScore_d=static_cast<double>(totalScore);
  // std::cout<<"totalScore_d: "<<totalScore_d<<std::endl;

  // ======================================================================
  double averageScore=totalScore_d/numStudents;
  // std::cout<<"averageScore: "<<averageScore<<std::endl;
  // 77.8

  return 0;
}

