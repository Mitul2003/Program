#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
#define print(T,n) for(int i = 0 ; i < n ; i++) cout << T[i] << " ";
 
vector <int>  stockspan(vector <int> prices) {
    vector <int> ans;

    stack <pair<int,int>> s;

    for(auto price : prices){
        int days = 1;
        while(!s.empty() and s.top().first <= price){
            days += s.top().second;
            s.pop();
        }
        s.push({price,days});
        ans.push_back(days);
    }
    return ans;

}
 
int main(){
    vector <int> a = {100,80,60,70,60,75,85};
    vector<int> res = stockspan(a);
    for(auto i : res) cout << i << " ";
    return 0;
}