#include<iostream>
using namespace std;
template<class t>
class Mitul{
    public:
    t data;
    Mitul(t a){
        data = a;
        
    }
    void Display();

};
template <class t>
void Mitul<t>::Display(){
        cout<<data;
    }

 void func(int a){
     cout<<"I am first func()"<<a<<endl;
 }
template <class t>
void func(t a){
    cout<<"I am templed func()"<<a<<endl;
}

template <class t>
void func1(t a){
    cout<<"I am templed func()"<<a<<endl;
}

int main(){
    // Mitul<int> M(5);
    // // cout<<M.data;
    // M.Display();  

     func(4);  // Exact match  take the higher prioroty

    func1(4);
    return 0;
}