#include <iostream>
#include <cstring>
using namespace std;

// ======================================================================
// Declare GeometricObject class
class GeometricObject
{
public:
  GeometricObject();
  GeometricObject(const double line1,const double line2);
  
  void SetLine1(const double line1);
  void SetLine2(const double line2);

  double GetLine1();
  double GetLine2();

  // You don't need to define pure virtual functions
  virtual double AreaCalculation()=0;
  virtual double Compute()=0;

protected:
  double line1,line2;
};

// ======================================================================
class Isosceles
:public GeometricObject
{
public:
  Isosceles();
  Isosceles(const double base,const double height);

  double AreaCalculation();
  double Compute();
  double GetSide();
  double GetArea();

private:
  double side;
  double area;
};

// ======================================================================
class Rectangle
:public GeometricObject
{
public:
  Rectangle();
  Rectangle(const double length,const double height);

  double AreaCalculation();
  double Compute();
  double GetRound();
  double GetArea();

private:
  double round;
  double area;
};

// ======================================================================
