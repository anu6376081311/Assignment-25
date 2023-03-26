#include<iostream>
using namespace std;

class Area
{
 private:
   float side,length,breath,radius;
   public:
   void setSide(float a) { side = a;}
   void setLengtBreath(float x,float y) { length = x; breath = y;}
   void setRadius( float r) {radius = r;}

   float areaOfSqure()
   {
    return side*side;
   }
   float areaOfRectangle()
   {
    return length*breath;
   }
   float areaOfCircle()
   {
    return 3.14*radius*radius;
   }
};
int main()
{
  Area a;
  a.setSide(5);
  a.setLengtBreath(3,2);
  a.setRadius(4);

  cout<<"Area of circle is :"<<a.areaOfCircle()<<endl;
  cout<<"Area of squre is :"<<a.areaOfSqure()<<endl;
  cout<<"Area of rectangle is :"<<a.areaOfRectangle()<<endl;
  return 0;
}