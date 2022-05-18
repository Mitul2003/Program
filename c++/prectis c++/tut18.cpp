#include<iostream>
using namespace std;
   // racursion Function
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    // Factorial of number
    int a;
    cout<<"Enter the num"<<endl;
    cin>>a;
    cout<<"THe Facouter of "<<a<< " is "<<factorial(a)<<endl;
    return 0;
}