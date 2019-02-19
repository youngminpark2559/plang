
// // ======================================================================
// // Test code
// #include <iostream>
// #include <cstring>
// #include "header.h"
// using namespace std;

// int main()
// {
//   Isosceles Tril(4.2,5.2);

//   std::cout<<"the length of a base of Isosceles: "<<Tril.GetLine1()<<std::endl;
//   // the length of a base of Isosceles: 4.2

//   std::cout<<"the length of a height of Isosceles: "<<Tril.GetLine2()<<std::endl;
//   // the length of a height of Isosceles: 5.2

//   std::cout<<"the area of an Isosceles: "<<Tril.AreaCalculation()<<std::endl;
//   // the area of an Isosceles: 10.92

//   std::cout<<"the side of an Isosceles: "<<Tril.Compute()<<std::endl;
//   // the side of an Isosceles: 3.88587
// }

// // ======================================================================
// // An upcasting example (cast sub type instance to base type instance)
// // a sub type instance knows all members of a base class so upcasting will lead to no problem

// #include <iostream>
// #include <cstring>
// #include "header.h"
// using namespace std;

// int main()
// {
//   // Suppose a GeometricObject is created from an abstract class
//   // You dynamically create Isosceles (sub class from GeometricObject class) instance
//   // and upcast its type
//   // c p1: create Isosceles instance and upcast it
//   GeometricObject *p1=new Isosceles(9,15);

//   // c p2: create Isosceles instance
//   Isosceles *p2=new Isosceles(5,6);


//   std::cout<<"p1: "<<p1->GetLine1()<<std::endl;
//   // p1: 9

//   std::cout<<"p2: "<<p2->GetLine1()<<std::endl;
//   // p2: 5
// }

// // ======================================================================
// // Downcasting example (cast from base to sub)
// // base doesn't know members of sub so downcasting can have problem

// #include <iostream>
// #include <cstring>
// #include "header.h"
// using namespace std;
 
// // This function takes address of a base class object
// void DisplayGeometricObject(GeometricObject &object)
// {
//   // GetLine1() and GetLine2() are member functions of base class
//   // so you won't have any issue
//   // But note that suppose base class has 2 sub classes

//   std::cout<<"line1: "<<object.GetLine1()<<std::endl;
//   std::cout<<"line2: "<<object.GetLine2()<<std::endl;

//   // GeometricObject: pointer object of base class
//   // &object: address of passed object
//   GeometricObject *p=&object;

//   // You downcast p into Isosceles sub class
//   Isosceles *p1=dynamic_cast<Isosceles*>(p); // Downcasting
//   Rectangle *p2=dynamic_cast<Rectangle*>(p); // Downcasting

//   if(p1!=NULL)
//   {
//     p1->AreaCalculation();
//     p1->Compute();

//     std::cout<<"Area of triangle: "<<p1->GetArea()<<std::endl;
//     std::cout<<"Side of triangle: "<<p1->GetSide()<<std::endl;
//   }

//   if(p2!=NULL)
//   {
//     p2->AreaCalculation();
//     p2->Compute();

//     std::cout<<"Area of rectangle: "<<p2->GetArea()<<std::endl;
//     std::cout<<"Side of rectangle: "<<p2->GetRound()<<std::endl;
//   }
// }

// int main()
// {
//   Isosceles p1(9,15);
//   Rectangle p2(9,15);

//   DisplayGeometricObject(p1);
//   // line1: 9
//   // line2: 15
//   // Area of triangle: 67.5
//   // Side of triangle: 6.48074

//   DisplayGeometricObject(p2);
//   // line1: 9
//   // line2: 15
//   // Area of rectangle: 135
//   // Side of rectangle: 12

//     return 0;
// }

// ======================================================================
// What you can know from above examples is 
// that upcasting (from sub to base) can is automatically executed 
// for example,
// GeometricObject *p1=new Isosceles(9,15);

// Downcasting (from base to sub) can be explicitly executed 
// because the base class doesn't know members of the sub class
// for example,
// GeometricObject *p=&object;
// Isosceles *p1=dynamic_cast<Isosceles*>(p); // explicitly downcasting
// Rectangle *p2=dynamic_cast<Rectangle*>(p); // explicitly downcasting

// ======================================================================
// Multiple inheritance

// Type of inheritance
// Type 1. base -> sub

// Type 2. base -> sub1
//              -> sub2

// Type 3. base1 -> sub
//         base2 ->

// Type 4. base -> sub1 -> sub2

// // ======================================================================
// // Let's see Type 3 inheritance in detail
// // Type 3. base1 -> sub
// //         base2 ->

// // Declare Score_Source class
// class Score_Source
// {
//     // ...
// };

// // Declare RankGrade_Source class
// class RankGrade_Source
// {
//     // ...
// };

// // Declare Final_Report class,
// // inherits from Score_Source and RankGrade_Source
// class Final_Report:public Score_Source,public RankGrade_Source
// {
//     // ...
//     // you can use members of 2 base classes;
//     // Score_Source and RankGrade_Source
// };
