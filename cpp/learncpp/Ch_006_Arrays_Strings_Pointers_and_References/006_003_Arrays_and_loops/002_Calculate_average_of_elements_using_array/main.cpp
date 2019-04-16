// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_003_Arrays_and_loops/002_Calculate_average_of_elements_using_array && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_003_Arrays_and_loops/002_Calculate_average_of_elements_using_array/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>
#include <cstring>
using namespace std;

// ======================================================================
int main()
{
  // c numStudents: int variable
  const int numStudents=5;

  // ======================================================================
  // c scores: (numStudents,) array which stores int values
  int scores[numStudents]={84,92,76,81,56};

  // ======================================================================
  // c totalScore: int variable
  int totalScore=scores[0]+scores[1]+scores[2]+scores[3]+scores[4];
  
  // ======================================================================
  // c totalScore_d: double variable
  double totalScore_d=static_cast<double>(totalScore);

  // ======================================================================
  // c averageScore: double variable
  double averageScore=totalScore_d/numStudents;

  // ======================================================================
  std::cout<<"averageScore: "<<averageScore<<std::endl;
  // averageScore: 77.8

  return 0;
}
