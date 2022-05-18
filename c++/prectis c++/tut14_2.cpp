#include<iostream>
using namespace std;

union money
    {
        int rice;                      //3 mathi game te 1 jj jagya aeloket thai(je meximum hpy te)
        char car;
        float pounds;
    };

int main(){

  /*  enum meal{ breakfast,lunch,dinner};
    meal m1 =lunch;
    cout<<(m1==2);    */
    
    union money m1;
    union money m2;

    m1.rice =34;
    m1.car ='c';
    m1.pounds =233;

    cout<<m1.pounds<<endl;    // aek jj jagya aeloket thay aetale car ya rice print ny thay
    
    return 0;
}