#include<iostream>
using namespace std;
 
class ReverseNumber
{
    private:
        int actualnum,reversenum;
    public:
        void setNum(int n){ actualnum = n;}
        int getactualNum(){ return actualnum;}
        int getreverseNum(){return reversenum;}
         
        void calculatereverse()
        {
            reversenum = (actualnum%10)*100 + ((actualnum/10)%10)*10 +actualnum/100;
        }        
             

};

int main()
{
    ReverseNumber RN;
    int p;
    cout<<"Enter a number :";
    cin>>p;
    RN.setNum(p);
    RN.calculatereverse();
    cout<<"The reverse number is "<<RN.getreverseNum();
}