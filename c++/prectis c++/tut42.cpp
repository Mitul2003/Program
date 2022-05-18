#include <iostream>
#include<cmath>
using namespace std;

class simplecal
{
    int a , b;
public:
    void getdata() 
    {
        cout<<"Enter the value of A : "<<endl;
        cin>>a;
        cout<<"Enter the value of B : "<<endl;
        cin>>b;
    }

    void perform()
    {
         cout << "Sum of the num is " << a + b << endl;
        cout << "sub. of the num is " << a - b << endl;
        cout << "mul. of the num is " << a * b << endl;
        cout << "div. of the num is " << a / b << endl;
       
    }
};

class scientifical{
     int a , b;
public:
    void getdata() 
    {
        cout<<"Enter the value of A : "<<endl;
        cin>>a;
        cout<<"Enter the value of B : "<<endl;
        cin>>b;
    }

    void perform()
    {
         cout << "the value of cos(a) " << cos(a) << endl;
        cout << "the value of sin(a) " << sin(a) << endl;
        cout << "the value of exp(a) " << exp(a) << endl;
        cout << "the value of tan(a) " << tan(a) << endl;
       
    }

    

};

int main()
{
    scientifical cal;
    cal.getdata();
    cal.perform();

    return 0;
}