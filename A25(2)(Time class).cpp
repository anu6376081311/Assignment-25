#include<iostream>
using namespace std;

class Time
{ 
    private:
         int hour;
         int minute;
        int second;
    public:

    void setValues(int h,int m,int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    void displayValues()
    {
        cout<<endl<<hour <<" hr "<<minute <<" min "<<second <<" sec";
    }

};

int main()
{
    Time t1,t2,t3;
    t1.setValues(2,36,45);
    t2.setValues(7,37,20);
    t1.displayValues();
    t2.displayValues();
}