

// // ======================================================================
// #ifndef _CONTEST_H_
// #define _CONTEST_H_

// #include <iostream>
// using namespace std;

// // Declare Test_Constructor1 class
// class Test_Constructor1
// {
// public:
//   Test_Constructor1();
//   ~Test_Constructor1();
// };

// // Declare Test_Constructor2 class
// // Test_Constructor2 class inherits from Test_Constructor1 class
// class Test_Constructor2:public Test_Constructor1
// {
// public:
//   Test_Constructor2();
//   ~Test_Constructor2();
// };

// #else 
// #endif 

// // Define Test_Constructor1::Test_Constructor1()
// Test_Constructor1::Test_Constructor1()
// {
//   std::cout<<"This is called in constructor of Test_Constructor1: "<<std::endl;
// }

// // Define Test_Constructor1::~Test_Constructor1()
// Test_Constructor1::~Test_Constructor1()
// {
//   std::cout<<"This is called in deconstructor of Test_Constructor1: "<<std::endl;
// }

// // Define Test_Constructor2::Test_Constructor2()
// Test_Constructor2::Test_Constructor2()
// {
//   std::cout<<"This is called in constructor of Test_Constructor2: "<<std::endl;
// }

// // Define Test_Constructor2::~Test_Constructor2()
// Test_Constructor2::~Test_Constructor2()
// {
//   std::cout<<"This is called in deconstructor of Test_Constructor2: "<<std::endl;
// }

// int main()
// {
//   Test_Constructor2 *p_TEST=new Test_Constructor2;
//   // First, constructor of base class is called
//   // This is called in constructor of Test_Constructor1: 

//   // Second, constructor of sub class is called    
//   // This is called in constructor of Test_Constructor2: 

//   delete p_TEST;
//   // Third, deconstructor of sub class is called
//   // This is called in deconstructor of Test_Constructor2: 

//   // Fourth, deconstructor of base class is called    
//   // This is called in deconstructor of Test_Constructor1: 

//   return 0;
// }

// ======================================================================
#ifndef _CONTEST_H_
#define _CONTEST_H_

#include <iostream>
using namespace std;
 
// Declare Test_Constructor1 class
class Test_Constructor1
{
public:
  // Overload constructors
  Test_Constructor1();
  Test_Constructor1(const int c);
  ~Test_Constructor1();

protected:
  int c;
};

// Declare Test_Constructor2 class
// Test_Constructor2 inherits from Test_Constructor1
class Test_Constructor2:public Test_Constructor1
{
public:
  Test_Constructor2();
  ~Test_Constructor2();
};

#else 
#endif 

// --------------------------------------------------
// Define Test_Constructor1::Test_Constructor1()
Test_Constructor1::Test_Constructor1()
{
  std::cout<<"This is called in constructor of Test_Constructor1: "<<std::endl;
}

// Define Test_Constructor1::Test_Constructor1(const int c)
Test_Constructor1::Test_Constructor1(const int c)
{
  this->c=c;
  std::cout<<"This is called in constructor of Test_Constructor1: "<<std::endl;
  std::cout<<"c: "<<c<<std::endl;
}

// Define Test_Constructor1::~Test_Constructor1()
Test_Constructor1::~Test_Constructor1()
{
  std::cout<<"This is called in deconstructor of Test_Constructor1: "<<std::endl;
}

// --------------------------------------------------
// Define Test_Constructor2::Test_Constructor2()
Test_Constructor2::Test_Constructor2()
// Without this, you get error if you don't overload Test_Constructor1 constructor, 
// 300 is passed when Test_Constructor1 constructor is called
:Test_Constructor1(300)
{
  std::cout<<"This is called in constructor of Test_Constructor2: "<<std::endl;
}

// Define Test_Constructor2::~Test_Constructor2()
Test_Constructor2::~Test_Constructor2()
{
  std::cout<<"This is called in deconstructor of Test_Constructor2: "<<std::endl;
}

// --------------------------------------------------
int main()
{
  Test_Constructor2 *p_TEST=new Test_Constructor2;
  // First, constructor of base class is called
  // This is called in constructor of Test_Constructor1: 
  // c: 300

  // Second, constructor of sub class is called    
  // This is called in constructor of Test_Constructor2: 

  delete p_TEST;
  // Third, deconstructor of sub class is called
  // This is called in deconstructor of Test_Constructor2: 

  // Fourth, deconstructor of base class is called
  // This is called in deconstructor of Test_Constructor1: 

  // --------------------------------------------------
  // Importantly note that
  // Sub class header (:Test_Constructor1(300)) ->
  // base class constructor ->
  // sub class constructor ->
  // sub class body

  return 0;
}

// ======================================================================
