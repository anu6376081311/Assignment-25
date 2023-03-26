#include<iostream>
using namespace std;

class gratestNumber
{
    private:
         int a,b,c,gratestnumber;
    public:
      
        void setValues(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }

        int getValues()
        {
            return a,b,c;
        }

        int getgratestnumber()
        {
            return gratestnumber;
        }

        void calculategratestnumber()
        {
            if(a>=b && a>=c)
            gratestnumber=a;
            else if(b>=a && b>=c)
            gratestnumber= b;
            else
            gratestnumber=c;
        }


};
int main()
{
    gratestNumber LN;
    LN.setValues(7,95,59);
    LN.calculategratestnumber();

    cout<<"The largest number is "<< LN.getgratestnumber();
}