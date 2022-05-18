#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"this is me";
    out.close();

    ifstream in;
    string str;
    in.open("sample60.txt");
   // in>>str;
   while (in.eof()==0)
   {
       getline(in,str);
       cout<<str<<endl;
   }
   
   // cout<<str;
    in.close();

    return 0;
}