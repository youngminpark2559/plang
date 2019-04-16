// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_012_Member_selection_with_pointers_and_references/004_Member_selection_operator_for_pointer_variable && \
// g++ \
// -std=c++11 \
// -o main /mnt/1T-5e7/mycodehtml/p_lang/cpp/learncpp/Ch_006_Arrays_Strings_Pointers_and_References/006_012_Member_selection_with_pointers_and_references/004_Member_selection_operator_for_pointer_variable/main.cpp && \
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
  // c ptr: pointer variable
  // which stores address of Person instance
  Person *ptr=&person;

  // ================================================================================
  // Because the syntax for access to structs and class members 
  // through a pointer is awkward (because you should use parenthesis before dot), 
  // C++ offers a second member selection operator (->) 
  // for doing member selection from pointers. 
  // (*ptr).age=5;
  ptr->age=5;

  // ================================================================================
  std::cout<<"person: "<<person.age<<std::endl;
  // person: 5

  return 0;
}
