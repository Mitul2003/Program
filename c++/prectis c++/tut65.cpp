#include <iostream>
using namespace std;
/*
CLASS TEMPLATES MULTIPLE PARAMETE(one ,two or more than two)
template<class T1,class T2>.....(coma separated)
class nameofclass{
    // body
}
*/
template <class T1, class T2>
class Myclass
{
public:
    T1 data1;
    T2 data2;

    Myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }

    void Display()
    {
        cout << this->data1 << endl
             << this->data2;
    }
};
int main()
{
    Myclass<int, char> obj(1, 'c');
    obj.Display();
    return 0;
}