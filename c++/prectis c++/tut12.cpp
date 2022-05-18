#include<iostream>
using namespace std;

int main(){
    // Pointer ---> data typ which hold the address of other data types
    
    int a=6;
    int* b = &a;
    // & ---> Address of operator
    cout<<"The address of a is = "<<b<<endl;
    cout<<"The address of a is = "<<&a<<endl;

    // * ----> (value at) Dereference
    cout<<"the valu at address b is "<<*b<<endl;
    cout<<"the valu at address b is "<<&b<<endl;

    // pointer to pointers
    int ** c = &b;  // just thinging....
    return 0;
}