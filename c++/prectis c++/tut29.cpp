/*
1. it shoul be declar in the  public setion of the class
2. They are automatically invoked whenever the object is created
3. Do not have return type and they can not return values
4. it can have default argument
5. We can not refer to their address
*/

#include <iostream>
using namespace std;

class complex
{
    int a, b;
    // creating a ******constructor***********
    // constructor is a speical member function with same name as of the class,
    //it is used to initializ the objec of its class
    // It is automatic invoked(call) Whenever an object is Created.
public:
    complex(void); // constructor Declaration
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)//------> This is Deafault constructor
{

    a = 1;
    b = 0;
}

int main()
{
    complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}