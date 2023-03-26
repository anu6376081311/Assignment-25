#include<iostream>
using namespace std;

class Rectangle
{
  private:
  int l,b,area;

  public:
  void setValues(int x,int y)
  {
    l=x;
    b=y;
  }
  int getValues()
  {
    return l,b;
  }

  int getArea()
  {
    return area;
  }

  void calculateArea()
  {
    area = l*b;
  }

};

int main()
{
    Rectangle R1;
    R1.setValues(6,15);
    R1.calculateArea();
    cout<<"The area of the rectangle is :"<< R1.getArea();

}