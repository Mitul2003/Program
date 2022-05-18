#include<iostream>
using namespace std;
class bankdiposit{
    int principal;
    int years;
    float intersRate;
    float returnvalue;

    public:
        bankdiposit(){}
        bankdiposit(int p,int y,float r); // r can b a value like 0.04
        bankdiposit(int p,int y,int r);   // r can be value likr 14
        void show();

};

bankdiposit :: bankdiposit(int p,int y,float r)   {
        principal = p;
        years = y;
        intersRate = r;
        returnvalue = principal;

        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1+intersRate);
        }
        
}
bankdiposit :: bankdiposit(int p,int y,int r)   {
        principal = p;
        years = y;
        intersRate = (float)r/100;
        returnvalue = principal;

        for (int i = 0; i < y; i++)
        {
            returnvalue = returnvalue * (1+intersRate);
        }
        
}
void bankdiposit :: show(){
    cout<<endl<<"Principal amount was "<<principal<<endl<<" Return value after "<<years<<endl<<" years Is "<<returnvalue<<endl;
}

int main(){
    bankdiposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    bd3.show();

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 =bankdiposit(p,y,r);
    bd1.show();
    
    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 =bankdiposit(p,y,R);
    bd2.show();
    
    return 0;
}