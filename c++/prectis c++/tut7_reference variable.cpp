#include<iostream>

using namespace std;

int main(){
      
float a=85.4f;
long double b=85.4l;

cout<<"THe size of 85.4 is "<<sizeof(85.4)<<endl;
cout<<"THe size of 85.4f is "<<sizeof(85.4f)<<endl;



//************** reference variable***************

float x=455.5;
float&  y =x;    // reference for x
cout<<x<<endl;
cout<<y<<endl;



cout<<"The value of x is "<<(int)x<<endl;
cout<<"The value of x is "<<int(x)<<endl;

    return 0;
}