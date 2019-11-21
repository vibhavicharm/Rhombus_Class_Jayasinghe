#include <iostream>
#include <string>

using namespace std;

class Rhombus{
  private:
    double diagonalP;
    double diagonalQ;

  public:
    void setDiagonalP(double);
    double getDiagonalP() const;
    void setDiagonalQ(double);
    double getDiagonalQ() const;
    double calcArea() const;
};

void Rhombus::setDiagonalP(double p){
  diagonalP = p;
}

double Rhombus::getDiagonalP() const{
  return diagonalP;
}

void Rhombus::setDiagonalQ(double q){
  diagonalQ = q;
}

double Rhombus::getDiagonalQ() const{
  return diagonalQ;
}

double Rhombus::calcArea() const{
  return ((diagonalP * diagonalQ) * 0.5);
}
