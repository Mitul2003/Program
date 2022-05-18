#include <iostream>
using namespace std;
// Base class
class Empoly
{

public:
    int id;
    float salary;
    Empoly(int IDD)
    {
        id = IDD;
        salary = 36.0;
    }
    Empoly() {}
};


// Derived Class syntax

/* 
class {{derived-class-name}}  : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class becomes Private members of the derived class
4. Private members are never inherited
*/

class programmer : public Empoly
{
public:
    int languagecode;

    programmer(int IDD)
    {
        id = IDD;
        languagecode = 9;
    }
    void getdata(){
        cout<<id<<endl;
    }
};

int main()
{
    Empoly mitul(1), jay(2);
    cout << mitul.salary << endl;
    cout << jay.salary << endl;

    programmer skillf(10);
    cout <<skillf.id<<endl;
    cout <<skillf.languagecode<<endl;
    skillf.getdata();

    return 0;
}