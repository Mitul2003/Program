#include <iostream>
using namespace std;
// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealcomplex(complex ,complex);
};


class complex
{
    int a, b;

public:
    //aek function nu Decleration AS a Friend
   // friend int calculator :: sumRealcomplex(complex o1,complex o2);
   //*******Akha class  ne friend
    friend class calculator;
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator :: sumRealcomplex(complex o1,complex o2)
    {
        return (o1.a+o2.a);
    }

int main()
{
    complex o1,o2;
    o1.setnumber(1,4);
    o1.printnumber();

    o2.setnumber(5,7);
    o2.printnumber();
    
    calculator cal;
    int res = cal.sumRealcomplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<res<<endl;

    return 0;
}