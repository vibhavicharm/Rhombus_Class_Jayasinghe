/* Student: Vibhavi Jayasinghe
Teacher: Dr_T
Programming Fundermantal 2
10-22-2019
*/

#include <iostream>
#include <string>
#include "rhombus.h"
#include "trapezoid.h"
#include "circle.h"

int main() {
  Rhombus r;
  r.setDiagonalP(2.75);
  r.setDiagonalQ(7.72);
  
  cout << "\nArea of the Rhombus is " << r.calcArea();

  Trapezoid t;
  t.setBaseA(12.2);
  t.setBaseB(5.0);
  t.setHeight(7.9);

  cout << "\nArea of the Trapezoid is " << t.calcArea();

  Circle c;
  c.setRadius(4.5);
  cout << "\nArea of the cirlce for 4.5 radius is " << c.calaArea();
  c.setRadius(7.4);
  cout << "\nArea of the cirlce for 7.4 radius is " << c.calaArea();

}