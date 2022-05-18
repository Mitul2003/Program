#include<iostream>
using namespace std;

class Animal
{
    private:
        char name,sound;
    public:
        int hight,weigth;
    
    void setdata(char a,char b);
    void getdata(){
        cout<<"Aimal name is "<<name<<endl;
        cout<<"Aimal sound is "<<sound<<endl;
        cout<<"Aimal height is "<<hight<<endl;
        cout<<"Aimal Weigth is "<<weigth<<endl;
    }
};

void Animal :: setdata(char a,char b){
    
    name=a;
    sound=b;
}

int main(){
    Animal cat;
    cat.hight=6;
    cat.weigth=45;
    cat.setdata('c','d');
    cat.getdata();
        return 0;
}