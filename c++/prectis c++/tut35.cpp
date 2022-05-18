#include<iostream>
using namespace std;
// destructor never takes an argument not does it return any value
int count=0;

class num{
    public:
     num(){
         count++;
         cout<<"This is the time when constructor is called for object num."<<count<<endl;
     }

     ~num(){
         cout<<"This is the time for my distructor is called for object number"<<count<<endl;
         count--;
     }
};
int main(){
    cout<<"We are inside the main function "<<endl;
    cout<<"Creatint First object n1 "<<endl;
    num n1;
    {                                           // block ma lakhelu block puratu jj rey che....
        cout<<"Creating the more object"<<endl;
        cout<<"Enter the block"<<endl;
        num n2,n3;
        cout<<"Exit the block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}