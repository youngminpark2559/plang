









// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_012_Member_selection_with_pointers_and_references/002_Same_functionality_to_member_selection_operator_by_using_reference_variable && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_012_Member_selection_with_pointers_and_references/002_Same_functionality_to_member_selection_operator_by_using_reference_variable/main.cpp && \
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
  // c ref: reference variable,
  // which references to person
  // ref is an alias of person
  Person &ref=person;

  // ================================================================================
  // Member selection using reference to struct
  ref.age=5;

  // ================================================================================
  std::cout<<"person: "<<person.age<<std::endl;
  // person: 5

  std::cout<<"ref: "<<ref.age<<std::endl;
  // ref: 5

  return 0;
}

