// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

void printvec(vector<int> &v){
    cout<<"Size: "<<v.size() <<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i]<<endl;
    }
    
}

int main(){
int N;
cin>>N;
vector<vector<int> > v;
for (int i = 0; i < N; i++)
{
    int n;
    cin>>n;
    vector <int> temp;
    for (int j = 0; j < n; j++)
    {
        int x;
        cin>>x;
        temp.push_back(x); //temparly vector
    }
    v.push_back(temp); // vector ni andar vector
}
for (int  i = 0; i < v.size(); i++)
{
    printvec(v[i]);
}

return 0;
}