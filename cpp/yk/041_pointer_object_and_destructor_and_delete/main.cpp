// cd /mnt/1T-5e7/mycodehtml/p_lang/cpp/yk && g++ -o 041_pointer_object_and_destructor_and_delete /mnt/1T-5e7/mycodehtml/p_lang/cpp/yk/041_pointer_object_and_destructor_and_delete.cpp && rm e.l && ./041_pointer_object_and_destructor_and_delete 2>&1 | tee -a e.l && code e.l

// ======================================================================
// Object for copy

// When you create instance,
// you can copy member variables which already created instance has

// Values which are stored in member variables of existing_object is copied to new_object
// class_name new_object(existing_object)

// // ======================================================================
// #include <iostream>
// using namespace std;

// class CopyObj
// {
// public:
//     CopyObj(const double h,const double w);
//     void ShowVar();
// private:
//     double height;
//     double weight;
// };

// CopyObj::CopyObj(const double h,const double w)
// {
//     height=h;
//     weight=w;
// }

// void CopyObj::ShowVar()
// {
//     std::cout<<"Height: "<<height<<std::endl;
//     std::cout<<"Weight: "<<weight<<std::endl;
// }

// int main()
// {
//     // c p1: create CopyObj instance
//     CopyObj p1(101.5,79.3);
//     p1.ShowVar();
//     // Height: 101.5
//     // Weight: 79.3

//     // Copy p1 into p2
//     CopyObj p2(p1);
//     p2.ShowVar();
//     // Height: 101.5
//     // Weight: 79.3

//     return 0;
// }

// ======================================================================
// Destructor
// - When static object becomes destructed (for example, when program ends), 
// destructor is automatically called

// Dynamic object (which can be created by using new keyword) 
// should be deleted by user by using delete keywork

// Name of destructor is ~name_of_Class

// Destructor function
// ~Student();

// // ======================================================================
// #include <iostream>
// using namespace std;

// // Declare CopyObj class
// class CopyObj
// {
// public:
//     // Declare constructor
//     CopyObj(const double h,const double w);

//     // Declare destructor 
//     ~CopyObj();

//     // Declare member function
//     void ShowVar();

// private:
// // Declare member variables
//     double height;
//     double weight;
// };

// // Define destructor 
// CopyObj::~CopyObj()
// {
//     std::cout<<"Object is destructed "<<std::endl;
// }

// // Define constructor 
// CopyObj::CopyObj(const double h,const double w)
// {
//     height=h;
//     weight=w;
// }

// // Define CopyObj::ShowVar()
// void CopyObj::ShowVar()
// {
//     std::cout<<"Height: "<<height<<std::endl;
//     std::cout<<"Weight: "<<weight<<std::endl;
// }

// int main()
// {
//     // c p1: create CopyObj static instance
//     CopyObj p1(101.5,79.3);
//     p1.ShowVar();
//     // Height: 101.5
//     // Weight: 79.3

//     // Copy p1 into p2
//     CopyObj p2(p1);
//     p2.ShowVar();
//     // Height: 101.5
//     // Weight: 79.3

//     return 0;
// }

// ======================================================================
// Pointer object
// - Pointer object stores "address of object"
// - Operator which is used for accessing members which are pointed by pointer object is "->"
// Struct has . as well as -> when accessing members

// Declare pointer object
// class_name *pointer_object;

// ======================================================================
// Assign address of object into pointer_object
// pointer_object=&object

// You can access members of object which is pointed by pointer object
// pointer_object->member

// You can create pointer_object with following way (which is simpler than above way)
// pointer_object = new class_name;
// Meaning: you create instance then you assign address of created instance into pointer_object

// // ======================================================================
// // Declare class
// class Student
// {
//     // ...
// };

// // Create instance by calling constructor
// Student Obj(100,89,96);

// // Declare pointer object
// Student *p_Obj;

// p_Obj=&Obj

// // Directly access Sum() via instance Obj
// Obj.Sum()

// // Indirectly access Sum() via pointer object p_Obj
// p_Obj->Sum()

// // ======================================================================
// // Declare class
// class Student
// {
//     // ...
// };

// // Create instance by calling constructor
// Student Obj(100,89,96);

// // Create dynamic instance by using new keyword
// // and assign address of created instance into pointer object p_Obj
// Student *p_Obj=new Student(98,76,45);

// // ...
// // Delete memory space which is owned by dynamic instance p_Obj
// delete (p_Obj)

// // ======================================================================
// // Object which is used for reference can be considered as alias of object

// // class_name &reference_object_name=object_name

// // You give alias p4 to p1
// // Now p1 and p4 indicate to same memory space
// CopyObj &p4=p1;

// // ======================================================================
