#include<iostream>
using namespace std;
class number{
    int a;
    public:
        number(){
            a=33;
        }

        number(int num){
            a =num;
        }
// when no copy con.  is found, compiler supplies its own copy con.
        number(number &obj){
            cout<<"copy con. call"<<endl;
            a =obj.a;
        }

        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main(){
    number x,y,z(45),z2;

    x.display();
    y.display();
    z.display();

    number z1(x);
    z1.display();

    z2 = z;   // copy constructor not called   // Shallow copy_only value copy thai
    z2.display();

    number z3 = z; // copy constructor invoked   // Deep Copy_value & pointer copy thai

    z3.display();
    return 0;
}