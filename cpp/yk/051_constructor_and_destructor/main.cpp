

// ======================================================================
#ifndef _CH11_A_H_
#define _CH11_A_H_
#include <iostream>
using namespace std;

// Declare class 
class A
{
// Declare public members
public:
  void set_variables_of_class_A(const int protected_variable_of_class_A,const int private_variable_of_class_A);
  void show_variables_of_class_A();

// Declare protected members
protected:
  int protected_variable_of_class_A;

// Declare private members
private:
  int private_variable_of_class_A;
};

// Declare class
// Class B inherits class A
class B:public A
{
// Declare public members
public:
  void show_something_by_function_of_class_B();
  int b;
};

#else 
#endif 

// Define A::set_variables_of_class_A(const int protected_variable_of_class_A,const int private_variable_of_class_A)
void A::set_variables_of_class_A(const int protected_variable_of_class_A,const int private_variable_of_class_A)
{
  std::cout<<"protected_variable_of_class_A: "<<protected_variable_of_class_A<<std::endl;
  std::cout<<"private_variable_of_class_A: "<<private_variable_of_class_A<<std::endl;

  this->protected_variable_of_class_A=protected_variable_of_class_A;
  this->private_variable_of_class_A=private_variable_of_class_A;
}

// Define A::show_variables_of_class_A()
void A::show_variables_of_class_A()
{
  std::cout<<"protected_variable_of_class_A: "<<protected_variable_of_class_A<<std::endl;
  std::cout<<"private_variable_of_class_A: "<<private_variable_of_class_A<<std::endl;
}

// Define B::show_something_by_function_of_class_B()
void B::show_something_by_function_of_class_B()
{
  b=30; // this->b=30;
  std::cout<<"b: "<<b<<std::endl;
  // b: 30

  // c protected_variable_of_class_A: protected member variable of class A
  protected_variable_of_class_A=200;
  std::cout<<"protected_variable_of_class_A: "<<protected_variable_of_class_A<<std::endl;
  // protected_variable_of_class_A: 200
}

int main()
{
  // c obj_A: create A instance
  A obj_A;

  obj_A.set_variables_of_class_A(10,20);
  obj_A.show_variables_of_class_A();

  // --------------------------------------------------
  // c obj_B: create B instance
  B obj_B;

  // Use set_variables_of_class_A() which is declared in class A
  obj_B.set_variables_of_class_A(30,40);

  // Use show_variables_of_class_A() which is declared in class A
  obj_B.show_variables_of_class_A();

  obj_B.show_something_by_function_of_class_B();
  // protected_variable_of_class_A: 200

  // --------------------------------------------------
  obj_A.show_variables_of_class_A();
  // protected_variable_of_class_A: 10
  // private_variable_of_class_A: 20

  return 0;
}

// ======================================================================
