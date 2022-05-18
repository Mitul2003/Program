#include<iostream>
using namespace std;
// ******************Object Oriented Programming***************************
class employ
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1);   // Declaration
        void getdata(){
            cout<<"The Value of a is "<<a<<endl;
            cout<<"The Value of b is "<<b<<endl;
            cout<<"The Value of c is "<<c<<endl;
            cout<<"The Value of d is "<<d<<endl;
            cout<<"The Value of e is "<<e<<endl;
            
        }
};

void employ :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
    
}

int main(){
    employ mitul;
   // mitul.a=9;    privet datatype
    mitul.d=8;
    mitul.e=9;
    mitul.setData(1,2,3);
    mitul.getdata();
    return 0;
}