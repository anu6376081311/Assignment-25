#include<iostream>
using namespace std;

class LargestNumber
{
    private:
         int a,b,largestnumber;
    public:
      
        void setValues(int x,int y)
        {
            a=x;
            b=y;
            
        }

        int getValues()
        {
            return a,b;
        }

        int getlargestnumber()
        {
            return largestnumber;
        }

        void calculatelargestnumber()
        {
            if(a>=b)
            largestnumber=a;
            else
            largestnumber=b;
        }


};
int main()
{
    LargestNumber LN;
    LN.setValues(205,95);
    LN.calculatelargestnumber();

    cout<<"The largest number is "<< LN.getlargestnumber();
}