#include <iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemprice[100];
    int counter=0;

    public:
        //void initcounter(void) { counter=0;}
        void displayprice(void);
        void setprice(void);
};

void shop :: setprice(void){
    cout<<"Enter ID of your item no "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop :: displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemprice[i]<<endl;
    }
    
}

int main()
{
    shop dukan;
   // dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();
    
    

    return 0;
}