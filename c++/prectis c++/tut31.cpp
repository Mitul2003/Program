#include <iostream>
using namespace std;
//*********constructor overloding
class complex
{
    int a, b;

public:
complex(){
    a=0;
    b=0;
}
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(4,6);
    c1.printnumber();

    complex c2(5);  //  peraedik constructor
    c2.printnumber();
    
    complex c3;  // deafault constructor
    c3.printnumber();

    return 0;
}