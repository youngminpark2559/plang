

// ======================================================================
// The created object from a sub class can access members of a base class
// members which are decorated by protected, public: possible to access
// members which are decorated by private: still impossible to access from a sub class object

// // ======================================================================
// #include <iostream>
// #include <string>
// using namespace std;

// #ifndef _CIRCLE_H_
// #define _CIRCLE_H_

// // Declare class
// class PFigure
// {
// // Declare private member
// private:
//   string color;

// // Declare public member
// public:
//   // constructor
//   PFigure();
//   // member functions
//   void SetColor(const string color);
//   string GetColor();
// };

// // Declare class
// // Circle class inherits from PFigure class
// class Circle:public PFigure
// {
// // Declare private member
// private:
//   double r,area;

// // Declare public member
// public:
//   // constructor
//   Circle();
//   // member functions
//   void SetR(const double r);
//   double GetArea();
// };
 
// #else 
// #endif 

// // Define PFigure::PFigure()
// PFigure::PFigure()
// {
//   this->color="white";
// }

// // Define PFigure::SetColor()
// void PFigure::SetColor(const string color)
// {
//   this->color=color;
// }

// // Define PFigure::GetColor()
// string PFigure::GetColor()
// {
//   return color;
// }

// // Define Circle::Circle()
// Circle::Circle()
// {
//   this->r=0;
//   this->area=0;
// }

// // Define Circle::SetR(const double r)
// void Circle::SetR(const double r)
// {
//   this->r=r;
// }

// // Define Circle::GetArea()
// double Circle::GetArea()
// {
//   area=r*r*3.14;
//   return area;
// }

// int main()
// {
//   // c cir1: create PFigure instance
//   PFigure cir1;

//   std::cout<<"cir1.GetColor(): "<<cir1.GetColor()<<std::endl;
//   // cir1.GetColor(): white

//   cir1.SetColor("red");
//   std::cout<<"cir1.GetColor(): "<<cir1.GetColor()<<std::endl;
//   // cir1.GetColor(): red

//   Circle cir2;
//   std::cout<<"cir2.GetColor(): "<<cir2.GetColor()<<std::endl;
//   // cir2.GetColor(): white

//   return 0;
// }

// // ======================================================================
// #ifndef _STR_H_
// #define _STR_H_

// #define MAX 50

// #include <iostream>
// #include <string>
// using namespace std;

// // StringCharArray class inherits from string class
// // to make a custom function which can insert "string" into "string array"
// class StringCharArray:public string
// {
// // Declare public member
// public:
//   void toCharArray(char *str);
// };

// // Define StringCharArray::toCharArray(char *str)
// // parameter is char type pointer variable
// void StringCharArray::toCharArray(char *str)
// {
//   // c i: create int type variable
//   int i;

//   // call the length() of this object 
//   // and assign the result into the len
//   int len=this->length();

//   // You iterate as much as the length of the passed string
//   for(i=0;i<len;i++)
//   {
//     // call at(i) of this object
//     // And you assign the result into the *(str+i) which is the passed array
//     *(str+i)=this->at(i);
//   }

//   // You assign null character at the end of the array
//   *(str+i)='\0';
// }

// #else 
// #endif 

// int main()
// {
//   StringCharArray one;
//   char t_str[50];
//   // std::cout<<"t_str: "<<t_str<<std::endl;
//   // t_str: �Tı�

//   one.assign("sample");
//   // std::cout<<"one: "<<one<<std::endl;
//   // sample
//   one.toCharArray(t_str);
//   // std::cout<<"one: "<<one<<std::endl;
//   // sample

//   std::cout<<"one: "<<one<<std::endl;
//   std::cout<<"t_str: "<<t_str<<std::endl;
// }
