#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}

// this method wii does not work
void swap(int a,int b){
    int temp =a;
    a=b;
    b=temp;
}

//call by reference using pointer
void swappointer(int* a,int* b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

int main(){
    
    int x=4,y=5;
    cout<<"The sum of 4 and 5 is "<<sum(x,y);
    cout<<"\nThe value of y is "<<x<<" and the value of y is "<<y<<endl;
    // this method wii does not work
    swap(x,y);
    cout<<"The value of y is "<<x<<" and the value of y is "<<y<<endl;
    swappointer(&x,&y);
    cout<<"The value of y is "<<x<<" and the value of y is "<<y<<endl;
    
    
    return 0;
}