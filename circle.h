#include <iostream>
#include <string>

using namespace std;

class Circle{
  private:
    double radius;
  public:
    void setRadius(double);
    double getRadius() const;
    double calaArea() const;
};

void Circle :: setRadius(double r){radius = r;}
double Circle :: getRadius() const {return radius;}
double Circle :: calaArea() const{
  return (3.14159 * (radius * radius));
}