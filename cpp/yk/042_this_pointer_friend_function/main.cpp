// ======================================================================
// this keyword
// - this is pointer which indicates to object itself via address of object itself

// - All objects have "this" pointer

// this object can clarify with preventing name collision

// // ======================================================================
// #include <iostream>
// #include <cstring>
// using namespace std;

// // Declare class
// class Sample
// {
// public:
//     // Declare constructor
//     Sample();
    
//     // Declare destructor
//     ~Sample();

//     // Declare member function
//     // parameter name score is same name with mamber variable name score
//     void setScore(const int score);
//     int getScore();

// private:
//     // Member variable
//     double score;
// };

// // Define destructor
// Sample::~Sample()
// {
//     std::cout<<"Object is destructed"<<std::endl;
// }

// // Define constructor
// Sample::Sample()
// {
//     std::cout<<"Object is created"<<std::endl;
// }

// // // Define Sample::setScore()
// // void Sample::setScore(const int score)
// // {
// //     Sample::score=score;
// // }

// // Define Sample::setScore() using this keyword
// void Sample::setScore(const int score)
// {
//     // score member variable of this object
//     this->score=score;
// }

// // Define Sample::getScore()
// int Sample::getScore()
// {
//     std::cout<<"score: "<<score<<std::endl;
// }

// int main()
// {
//     // c p1: create CopyObj instance
//     Sample p1;
//     // Object is created

//     p1.setScore(100);
//     p1.getScore();
//     // score: 100
    
//     // Object is destructed

//     return 0;
// }

// ======================================================================
// Friend function

// You define kind of friend relationship between specific function and specific class
// Then, you can access to private members

// // ======================================================================
// // You can use "friend" to make friend function to specific class

// #include <iostream>
// #include <cstring>
// using namespace std;

// // Declare class
// class SaleInf
// {
//     // Declare friend function to SaleInf class
//     friend int CheckTax2(SaleInf &Obj);

// public:
//     // Declare member functions
//     SaleInf(const double Income);
//     double getTax();

// private:
//     // Declare member variables
//     double Income;
//     double Tax;
// };

// // --------------------------------------------------
// // Define SaleInf::SaleInf()
// SaleInf::SaleInf(const double Income)
// {
//     this->Income=Income;
// }

// // Define SaleInf::getTax()
// double SaleInf::getTax()
// {
//     return Tax;
// }

// // Define CheckTax2()
// int CheckTax2(SaleInf &Obj)
// {
//     if(Obj.Income<=0)
//     {
//         return 0;
//     }
    

//     Obj.Tax=Obj.Income*0.03;
    
//     return 1;
// }

// int main()
// {
//     SaleInf s1(20.4);
//     CheckTax2(s1);

//     std::cout<<"Tax: "<<s1.getTax()<<std::endl;

//     return 0;
// }
