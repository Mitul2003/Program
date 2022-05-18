#include <iostream>
using namespace std;

// Syntax for inheriting in multiple inheritance
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class Base1
{
protected:
    int base1int;

public:
    void get_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void get_base2int(int a)
    {
        base2int = a;
    }
};
/*
The inherited derived class will look something like this:
Data members:
    base1int --> protected
    base2int --> protected

Member functions:
    set_base1int() --> public
    set_base2int() --> public
    set_show() --> public
*/
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The valu of base 1 is " << base1int << endl;
        cout << "The valu of base 2 is " << base2int << endl;
        cout << "The sum of these value is  " << base1int + base2int << endl;
    }

};

int
main()
{
    Derived mitul;
    mitul.get_base1int(23);
    mitul.get_base2int(25);
    mitul.show();
    return 0;
}