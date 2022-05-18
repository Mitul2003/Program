#include<iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor=1.04){  // (compalsari arugiment,Deafoult aru.)
    return currentMoney * factor;
}
int main(){
    int money;
    cout<<"Enter your money :";
    cin>>money;
    
    cout<<"If you have "<<money<<" RS in your bank , you will recive "<<moneyReceived(money)<< " RS after 1 year"<<endl;
    // FOr deafoult valueṇ
    cout<<"for vip : If you have "<<money<<" RS in your bank , you will recive "<<moneyReceived(money,1.1)<< " RS after 1 year"<<endl;
    
    return 0;
}