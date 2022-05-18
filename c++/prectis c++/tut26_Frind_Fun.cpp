/* friend function
  1.not in tha scop of class
  2.c1.sumcomplex() == invailed
  3.can be invoked Withe out the Any object 
  4.usuall contets the object as arguments
  5.can be declar any side 

*/

#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void setnumber(int n1,int n2){
            a = n1;
            b = n2;
        }
        friend complex sumComplex(complex o1,complex o2);  // Friend Function  complex class na privet member sathe kai pan kari sake
        void printnumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

complex sumComplex(complex o1,complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}


int main(){
    complex c1,c2,sum;
    c1.setnumber(1,4);
    c1.printnumber();

    c2.setnumber(5,8);
    c2.printnumber();

    sum =sumComplex(c1,c2);
    sum.printnumber();

    return 0;
}