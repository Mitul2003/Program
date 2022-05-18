#include<iostream>
using namespace std;

class y;

class x{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(x,y);
};
class y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(x,y);
};

void add(x o1,y o2){
    cout<<"Suming data of x and y object gives me "<<o1.data + o2.num;
    }

int main(){
    x a1;
    a1.setValue(3);
   

    y b1;
    b1.setValue(5);

    add(a1 ,b1);
    return 0;
}