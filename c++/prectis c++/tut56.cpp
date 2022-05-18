#include<iostream>
using namespace std;
class baseclass{
    public:
        int var_base;
        virtual void display(){
            cout<<" 1 Display Base class variable var1 "<<var_base<<endl;

        }
};

class derivedclass : public baseclass{
          public:
        int var_derived;
        void display(){

            cout<<"1 Display derived class variable var1 "<<var_derived<<endl;
            cout<<"1 Display Base class variable var1 "<<var_base<<endl;

        }
};
int main(){
    baseclass *base_class_pointer;

    derivedclass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    
    return 0;
}