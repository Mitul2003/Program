#include<iostream>
using namespace std;

   // *****Function prototype
   // Type function-name (arguments);
   int sum(int a,int b);      //----->Acceptable
   //  int sum(int a,b);   ----->not...
   //  int sum(int ,int); //------>Acceptabld

int main(){
     
     // num1 and num2 are actual parameters
    int num1,num2;
    cout<<"Enter your num1 "<<endl;
    cin>>num1;
    cout<<"Enter your num2 "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2);

    return 0;
}

    // formal parameters a and b taking value from actual parameters num1 and num2
int sum(int a,int b){
    int c=a+b;
    return c;
}