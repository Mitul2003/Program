#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
        void setdata(int a,float b){
            id = a;
            price = b;
        }
        void getdata(void){
            cout<<"code of this item is "<<id<<endl;
            cout<<"price of this item is "<<price<<endl;
        }

};


int main(){
    int size =3;

    shop *ptr = new shop[size];
    shop *ptrtemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Id and price of item "<< i + 1<<endl;
        cin>>p>>q;
        //(*ptr).setdata(p,q);
        ptr->setdata(p,q);
       ptr ++;
    }
    
    for (int j = 0; j < size; j++)
    {
        cout<<"item number"<<j+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    

    
    
    return 0;
}