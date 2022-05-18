#include <bits/stdc++.h>
using namespace std;
// 1 inbulit implementation
// 2 Time complexity
// 3 valid keys datatype
int main()
{
    
    unordered_map<int, string> m;
    m[1] = "abc"; //o(1)
    m[3] = "efg";
    m[5] = "xyz";
    m[2] = "mmm";
    m.insert({4, "abc"});

    auto it = m.find(5);

     m.erase(3);  
    // m.erase(it)        //o(1)
    if(it == m.end())
        cout<<"No Value";
    else
        cout<<it->first<<" "<<it->second<<endl;
    

    for(auto map : m){
        cout<<map.first<<" "<<map.second<<endl;
    }

    return 0;
}