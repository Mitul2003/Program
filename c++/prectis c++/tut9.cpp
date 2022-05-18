#include<iostream>

using namespace std;

int main(){
    // c++ control structures
    // 1.sequence Structure
    // 2. Selection Structure   1.if-else 2.if-else lejer 3.Switch Case
    // 3. Loop Structure


    int age;
    cout<<"Enter Your Age"<<endl;
    cin>>age;
     /* ******* 2. Selection Structure   1.if-else 2.if-else lejer
    
    if(age<18){
        cout<<"Youre age under 18"<<endl;
    }
    else if(age==18)
    {
        cout<<"Your age is 18"<<endl;
    }
    else
    {
        cout<<"You come the party";
    }    */

     // ******2. Selection Structure  3.Switch Case

     switch (age)
     {
     case 18:
         cout<<"Your age is 18";
         break;
     
     default:
        cout<<"You come the party";
         break;
     }
    
    return 0;

}
    
