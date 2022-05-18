#include<iostream>
using namespace std;
    //**********Function overloding**************

int sum(int a, int b){
    return a+b;
}

int sum(int a, int b,int c){
    return a+b+c;
}

// volum of silander
int volume(double r, int h){
    return(3.14*r*r*h);
}

// calcute the volume of cube
int volume(int a){
    return (a*a*a);
}

// rectangular box
int volume(int l,int b,int h){
    return (l*b*h);
}

int main(){
    cout<<"Num. of 2 and 5 sum is "<<sum(2,5)<<endl;
    cout<<"Num. of 3 and 5 and 6 sum is "<<sum(3,5,6)<<endl;
    cout<<"The volum of rectangular. 3,7,6 is"<<volume(3,7,6)<<endl;
    cout<<"The volum of silander. 7,6 is"<<volume(7,6)<<endl;
    cout<<"The volum of cub. 7 is"<<volume(7)<<endl;
    


    
    return 0;
}