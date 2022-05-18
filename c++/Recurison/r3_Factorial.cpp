#include<iostream>
using namespace std;


int factorial(int n){
    // int  static fact;
    if(n == 1)
        return 1;
    else
    // fact = fact * n;
    return(n * factorial(n-1));
}

int main(){
    int n,result;
    cout<<"Enter your Num. ";
    cin>>n;

    result = factorial(n);

    cout<<"Your fac. is "<<result;
    return 0;
}