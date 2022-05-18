#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
        cout<<"Size is : "<<m.size()<<endl;
        for(auto &m : m){
        cout<<m.first << " "<< m.second<<endl;
    }
}
int main(){
    map<int,string> m;   // map store key,string(key are unic)
                        // not continus memory allocation
                        // Auto shorted key in map

    m[1] = "abc";  //o(log(n))
    m[3] = "efg";
    m[5] = "xyz";
    m.insert({4,"abc"});

    auto it = m.find(5); // find fun. return itearetar
                         // o(log(n))
    m.erase(3);  
    // m.erase(it)        //o(log(n))
    if(it == m.end()){
        cout<<"No Value";
    }
    else{
        cout<<it->first<<" "<<it->second<<endl;
    }
    // m.clear;
    // map<int,string> :: iterator it;
    // for ( it = m.begin(); it != m.end(); it++)
    // {
    //     cout<<(*it).first << " "<< (*it).second<<endl;
    // }

    
    
    

return 0;
}