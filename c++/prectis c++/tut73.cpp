#include<iostream>
#include<map>
#include<string>
using namespace std;

// map is an associative array
int main(){
    map<string, int>marksmap;
    marksmap["Mitul"] = 98;
    marksmap["rohan"] = 8;
    marksmap.insert({{"Vijay",52},{"Rahul",99}});
    marksmap["jay"] = 9;

    map<string, int> :: iterator iter;
    for (iter=marksmap.begin();iter!=marksmap.end() ;iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"Thi size is "<<marksmap.size()<<endl;
    cout<<"Thi size is "<<marksmap.max_size()<<endl;
    cout<<"Thi size is "<<marksmap.empty()<<endl;
    return 0;
}