#include<bits/stdc++.h>

using namespace std;
void printvec(vector<pair<int,int>> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second <<endl;
    }
    
}

int main(){
    vector<pair<int,int> >v ={{1,2},{3,4}};
    printvec(v);
    int n;
    cin>>n;
    for (int i = 0; i < 3; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printvec(v);
    return 0;
}