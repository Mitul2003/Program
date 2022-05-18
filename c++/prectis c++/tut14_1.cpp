#include<iostream>
using namespace std;

/* typedef */struct empoly
{
    int eid;
    float salary;
    char favchar;
} /*ep*/ ;


int main(){
    
    struct empoly mitul;    //ep mitul;
    struct empoly vaibhav;
    struct empoly Dhaval;
    
    mitul.eid = 1261;
    mitul.salary =25000;
    mitul.favchar = 'a';

    cout<<"Empoly detail is "<<mitul.eid<<endl;
    cout<<"Empoly detail is "<<mitul.salary<<endl;
    cout<<"Empoly detail is "<<mitul.favchar<<endl;
    return 0;
}