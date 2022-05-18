#include<iostream>
using namespace std;
     // Pointer of Arrey
int main(){
    // pointer arithmetic ---> Adderssnew=adderess current + i *size of data type
    int marks[] = {25,20,27,28};
    int *p = marks;
     
     cout<<*(p++)<<endl;      // marks[0]=p
     cout<<*(++p)<<endl;      // marks[2] = p+2     

    cout<<"The value of mark[0] is "<<*p<<endl;
    cout<<"The value of mark[0] is "<<*(p+1)<<endl;
    cout<<"The value of mark[0] is "<<*(p+2)<<endl;
    cout<<"The value of mark[0] is "<<*(p+3)<<endl;
    
    return 0;
}