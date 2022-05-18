#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    int a;
    cin>>a;
    cout<<"The term of fibonaci sequence at possition "<<a<< " is "<<fib(a)<<endl;
    return 0;
}