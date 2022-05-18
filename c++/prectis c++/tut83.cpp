/*
Given N String ,print unique string in 
lexiographical order with their
frequency
*/
/*
int largest_map_value(const map<char, int> &m)
    {
        map<char, int>::const_iterator it = m.begin();
        int highest = it->second;
        for (it = m.begin(); it != m.end(); ++it)
        {
            if (it->second > highest)
                highest = it->second;
        }
        return highest;
    }
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        // m[s] = m[s] + 1;
        m[s]++;
    }

    for(auto pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
return 0;
}