// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_003_Arrays_and_loops/001_Calculate_average_of_elements_of_multiple_variables && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_003_Arrays_and_loops/001_Calculate_average_of_elements_of_multiple_variables/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

// ======================================================================
#include <iostream>
#include <cstring>

// ======================================================================
int main()
{
  // c numStudents: int variable
  const int numStudents=5;

  // c score0: int variable
  int score0=84;
  int score1=92;
  int score2=76;
  int score3=81;
  int score4=56;
  
  // ======================================================================
  // c totalScore: int variable
  int totalScore=score0+score1+score2+score3+score4;
  // std::cout<<"totalScore: "<<totalScore<<std::endl;
  // 389

  // Convert int to double
  double total_score_d=static_cast<double>(totalScore);
  std::cout<<"total_score_d: "<<total_score_d<<std::endl;
  // 389

  // ======================================================================
  // c averageScore: double variable
  double averageScore=total_score_d/numStudents;

  std::cout<<"averageScore: "<<averageScore<<std::endl;
  // averageScore: 77.8

  return 0;
}
