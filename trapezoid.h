/* Student: Vibhavi Jayasinghe
Teacher: Dr_T
Programming Fundermantal 2
10-22-2019
*/

#include <iostream>
#include <string>

using namespace std;

class Trapezoid{
  private:
   double baseA;
   double baseB;
   double height;

  public:
    void setBaseA(double);
    double getBaseA() const;
    void setBaseB(double);
    double getBaseB() const;
    void setHeight(double);
    double getHeight() const;
    double calcArea() const; 
};

void Trapezoid::setBaseA(double a){
  baseA = a;
}

double Trapezoid::getBaseA() const{
  return baseA;
}

void Trapezoid::setBaseB(double b){
  baseB = b;
}

double Trapezoid::getBaseB() const{
  return baseB;
}

void Trapezoid::setHeight(double h){
  height = h;
}

double Trapezoid::getHeight() const{
  return height;
}

double Trapezoid::calcArea() const{
  return (((baseA + baseB) * 0.5) * height);
}

