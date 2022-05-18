#include<iostream>

using namespace std;
int glo=45; //Global veriabal
int sum(){
    int a;
    cout<<"sum function "<<glo;
}

int main(){
    //local ver.
    int glo=4;
    glo=48;
    sum();
    
    cout<<"\nGlobal ver. is "<<glo;
    cout<<"\nGlobal ver. is "<<::glo;   // global ver. ne print karva

    return 0;
}