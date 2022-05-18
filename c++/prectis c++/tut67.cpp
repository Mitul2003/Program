#include<iostream>
using namespace std;

// float funAverage(int a,int b){
//     float avg =(a+b)/2.0;
//     return avg;

// }

template<class t>
t seap(t &a,t &b){
    t temp = a;
    a = b;
    b = temp;

}


template<class t1,class t2>
float funAverage2(t1 a,t2 b){
    float avg =(a+b)/2;
    return avg;

}

int main(){
    float a;
    a = funAverage2(50.50,50.50);    
    printf("The ave. of thes number if %.3f\n",a);
    float x=6.5,y=7;
    swap(x,y);
    cout<<x<<endl<<y<<endl;

    return 0;
}