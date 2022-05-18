#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr =&a;

    cout<<"The valu of a is "<<*(ptr)<<endl;

    // New operater
    // new Keyword

    // int *p = new int(40);
    float *p = new float(40.55);
    cout<<"The valu at address p is "<<*(p)<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    //delete[] arr;    // block ne free kari dee
    cout<<"THe value of aree[0] is "<<arr[0]<<endl;
    cout<<"THe value of aree[2] is "<<arr[1]<<endl;
    cout<<"THe value of aree[3] is "<<arr[2]<<endl;

    //Delet operater
    
    return 0;
}