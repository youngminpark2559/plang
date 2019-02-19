// ======================================================================
// There are functionalities which are much used

// So, C++ already wrote classes for frequently used object

// For example,
// string class
// fstream class

// ======================================================================
// string class

// - It defines member variables and member functions

// How to create a string object
// string string_object_name

// Create a string object with calling its constructor
// string string_object_name("Kim Kab Soon");

// Or you can also use the following way 
// but the effect should be identical to what you try from above
// because the string class provides the "operator overloading" for "="
// string string_object_name="Kim Kab Soon";

// ======================================================================
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  // c s_name: create string instance
  string s_name;

  // c s_name: assign "string" into s_name
  s_name="string";

  std::cout<<"s_name "<<s_name<<std::endl;
  // string

  std::cout<<"length of s_name "<<s_name.length()<<std::endl;
  // 6

  // --------------------------------------------------
  // c s_name: append another string
  // You can use this + operator with the string object
  // because the string class overloads the + operator
  s_name=s_name+" class";
  
  // You can have a same effect by trying the append()
  // s_name.append(" class")

  std::cout<<"s_name "<<s_name<<std::endl;
  // string class
  
  std::cout<<"length of s_name "<<s_name.length()<<std::endl;
  // 12

  // --------------------------------------------------
  // copy s_name and paste into str instance
  string str(s_name);
  
  std::cout<<"s_name "<<str<<std::endl;
  // string class
  
  std::cout<<"length of str "<<str.length()<<std::endl;
  // 12

  // --------------------------------------------------
  // Copy string from 0 to 8 in "Computer science"
  // and append it into str
  str.append("Computer science",0,8);

  std::cout<<"s_name "<<str<<std::endl;
  // string classComputer
  
  std::cout<<"length of str "<<str.length()<<std::endl;
  // 20
}

// ======================================================================
