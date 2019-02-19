

// ======================================================================
// You can redefine functions which are defined in a base class
// and it's called overriding

// Dynamic binding:
// At runtime, you can decide the function you want to use
// Dynamic binding is used when one function is overriden in multiple classes

// ======================================================================
// One member function of base class can be redefined in multiple sub classes as multiple implementations
// It's called polymorphism

// ======================================================================
// Conditions which should be required 
// when one member function of the base class can be redefined in multiple sub classes 
// as multiple implementation are as following:

// - member function of the base class should be declared as the virtual function

// - variables which are passed from parameter of function should contain the address of object
// so that the correct redefined function can be called in the dynamic binding way

// // ======================================================================
// #include <iostream>
// #include <cstring>
// using namespace std;

// // Declare class_A_for_example class
// class class_A_for_example
// {
// public:
//   // Member function
//   string message_from_class_A()
//   {
//       return "This is class_A_for_example";
//   }
// };

// class class_B_for_example:public class_A_for_example
// {
// public:
//   // Override message_from_class_A()
//   string message_from_class_A()
//   {
//       return "This is class_B_for_example";
//   }
// };

// void TestFunction1(class_A_for_example x)
// {
//   std::cout<<x.message_from_class_A()<<std::endl;
// }

// void TestFunction1(class_B_for_example x)
// {
//     std::cout<<x.message_from_class_A()<<std::endl;
// }

// int main()
// {
//   // c a: create class_A_for_example instance
//   class_A_for_example a;

//   // c b: create class_B_for_example instance
//   class_B_for_example b;

//   // Pass class_A_for_example instance
//   TestFunction1(a);
//   // This is class_A_for_example
  
//   // Pass class_B_for_example instance
//   TestFunction1(b);
//   // This is class_B_for_example

//   return 0;
// }

// // ======================================================================
// // Dynamic binding case

// #include <iostream>
// #include <cstring>
// using namespace std;

// class class_A_for_the_example
// {
// public:
//   // You use virtual keyword so a polymorphism functionality can be supported
//   virtual string message_from_class_A()
//   {
//     return "class_A_for_the_example";
//   }
// };

// class class_B_for_the_example:public class_A_for_the_example
// {
// public:
//   // Override message_from_class_A()
//   string message_from_class_A()
//   {
//     return "class_B_for_the_example";
//   }
// };

// // Pass address of class_A_for_the_example object
// void global_func_for_the_example(class_A_for_the_example *x)
// {
//   // since it's pointer, you use -> as referencing-object operator
//   std::cout<<x->message_from_class_A()<<std::endl;
// }

// // Pass address of class_B_for_the_example object
// void global_func_for_the_example(class_B_for_the_example x)
// {
//   std::cout<<x.message_from_class_A()<<std::endl;
// }

// int main()
// {
//   // c a: create class_A_for_the_example instance
//   class_A_for_the_example a;
  
//   // c b: create class_B_for_the_example instance  
//   class_B_for_the_example b;

//   // Pass address of class_A_for_the_example object
//   global_func_for_the_example(&a);
//   // class_A_for_the_example

//   // Pass address of class_B_for_the_example object
//   global_func_for_the_example(&b);
//   // class_B_for_the_example

//   return 0;
// }

// ======================================================================
// An abstract class is the class which is not written for creating an instance

// Rather than that, the abstract class is used as a base class in a class inheritance

// A pure virtual function has no contents in a function body,
// contents of the pure virtual function is defined in sub classes via overriding.

// How to create the pure virtual function:
// virtual return_type function_name()=0;

// ======================================================================
// In other words, a class which contains the pure virtual function can be called as the abstract class

// // ======================================================================
// #include <iostream>
// #include <string>
// using namespace std;

// // Declare Test_Abstract_Class class
// class Test_Abstract_Class
// {
// public:
//   // Declare pure_virtual_function_example()
//   virtual string pure_virtual_function_example()=0;
// };

// // Declare Test_Sub_Class class
// class Test_Sub_Class:public Test_Abstract_Class
// {
// public:
//   // Override pure_virtual_function_example()
//   string pure_virtual_function_example()
//   {
//     return "pure_virtual_function_example";
//   }
// };

// int main()
// {
//   // c obj1: create Test_Abstract_Class instance
//   // but you will have error because Test_Abstract_Class (abstract class) can't create instance
//   // Test_Abstract_Class obj1;

//   // So you can't use following sentence
//   // std::cout<<"obj1.pure_virtual_function_example(): "<<obj1.pure_virtual_function_example()<<std::endl;
//   return 0;
// }
