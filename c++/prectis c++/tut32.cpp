#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
        simple(int a, int b=9){ /// constructor with default argument
            data1 =a;
            data2=b;
        }
        void printdata(){
            cout<<"The value of Data is "<<data1<<" and "<<data2<<endl;
        }

};
int main(){
    simple s(1);
    s.printdata();
    return 0;
}