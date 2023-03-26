#include<iostream>
using namespace std;

class Circle
{
   private:
   float r,area;

   public:
   void setR(int x)
   {
    r=x;
   }
   float getR()
   {
      return r;
   }

   float getArea()
   {
    return area;
   }

   void calculateArea()
   {
    area = 3.14*r*r;
   }
};

int main()
{
    Circle C1;
    C1.setR(12);
    C1.calculateArea();
    cout<<"The area of the circle is:"<< C1.getArea();
}