#include<iostream>
using namespace std;

class Squre
{
    private:
    int n,s;

    public:
    static int count;
    void setn(int x) {n=x;}
    int getn(){return n;}

    void calculatesqure()
    {
        s=n*n;
    }

    int getsqure(){return s;}

    int getcount(){ return count++;}

};
 int Squre::count=0;

int main()
{
    Squre s1;
    s1.setn(30);
    s1.calculatesqure();
    cout<<"The squre of the given number is "<< s1.getsqure()<< endl;
    cout<<"The number of times the function is called is "<< s1.getcount();
}
