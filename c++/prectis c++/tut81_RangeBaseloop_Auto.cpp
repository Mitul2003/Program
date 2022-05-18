#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v ={1,2,3,4,5};
    vector<pair<int,int>> v1 = {{2,3},{4,5}};

    // Range Base loop
    for(int &value : v){ // refrance
        cout<< value << " ";
    } 
    cout<<endl;
    for(pair<int,int> &value : v1){
        cout<<value.first<<" "<<value.second<<endl;
    }

    for(auto &value : v1){                                // auto
        cout<<value.first<<" "<<value.second<<endl;
    }

    auto a = 1;
    cout<<a<<endl;
return 0;
}