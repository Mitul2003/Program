#include<iostream>
using namespace std;
template<class t1=int, class t2=float ,class t3=char>

class Mitul{
    public:
        t1 a;
        t2 b;
        t3 c;
        Mitul(t1 x,t2 y,t3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"the value of a is "<<a<<endl
            <<"the value of b is "<<b<<endl
            <<"the value of c is "<<c<<endl;
        }
};
int main(){
    Mitul<> m(10,10.11,'f');
    cout<<endl;
    Mitul<float,char,int> h(1.4,'r',5);
    m.display();
    h.display();
    
    return 0;
}