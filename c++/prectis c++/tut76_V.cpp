#include<iostream>
#include<vector>
using namespace std;
void printvec(vector <int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
    
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the no of vec.";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x; 
        v.push_back(x);
    }
    printvec(v);
    return 0;
}
