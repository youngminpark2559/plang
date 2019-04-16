









// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_012_Member_selection_with_pointers_and_references/001_Member_selection_operator_dot && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_012_Member_selection_with_pointers_and_references/001_Member_selection_operator_dot/main.cpp && \
// rm e.l && ./main 2>&1 | tee -a e.l && code e.l

#include <iostream>
#include <cstring>
using namespace std;

struct Person
{
    int age;
    double weight;
};

// ================================================================================
int main()
{
  // c person: instance of struct Person
  Person person;
  
  // ================================================================================
  // Select member age using member selection operator
  person.age=5;

  // ================================================================================
  std::cout<<"person: "<<person.age<<std::endl;
  // person: 5

  return 0;
}

