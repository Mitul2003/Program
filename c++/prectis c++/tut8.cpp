#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    const int a=55;
    // a=44;Error Becaust A is const verible
    cout<<"The num of a is :"<<a<<endl;

    // menipuletor 1.<<endl 2. setw

    int x=4,y=44,z=444;
    cout<<"The valu of without is: "<<x<<endl;
    cout<<"The valu of without is: "<<y<<endl;  
    cout<<"The valu of without is: "<<z<<endl;
  
    cout<<"The valu of a is: "<<setw(4)<<x<<endl;
    cout<<"The valu of b is: "<<setw(4)<<y<<endl;
    cout<<"The valu of c is: "<<setw(4)<<z<<endl;
    
    // Operator precedence

    
    return 0;
}