#include<iostream>
#include<fstream>
// ofstring --> write karva mate
// ifstring --> Read karva mate
using namespace std;

int main(){
    ofstream mout("sample60.txt");
    cout<<"Enter your String";
    string name;    
    cin>>name;

    mout<<name +"My name is ";

    mout.close();
    

    ifstream min("sample60.txt");
    string content;
    min>>content;

    cout<<"The content of this file is : "<<content;
    min.close();

    return 0;
}