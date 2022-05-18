#include<iostream>
using namespace std;

// inline fun. = compiling fast and fun. nanu hoy tai use thay
inline int product(int a,int b){
    // Do not use below fun, in inline fun.
    static int c=0;   // This executes only one time
    // c=c+1;  // Next time this function is run ,the value of c will be reained
    // cout<<c;
    return a*b;
}

int main(){
    int a,b;
    cout<<"Entet the valu of a and b ";
    cin>>a>>b;
    cout<<"The Product of a and b is "<<product(a,b)<<endl;
    return 0;
}