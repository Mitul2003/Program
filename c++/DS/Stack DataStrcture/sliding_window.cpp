#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
#define print(T,n) for(int i = 0 ; i < n ; i++) cout << T[i] << " ";
 
void solve() {

}
 
int main(){
    int n,k; cin >> n >> k;
    vector <int> a(n);

    for(auto &i : a) cin >> i ;

    multiset<int,greater<int>> s;
    vector <int> ans;
    for(int i = 0 ; i < k ; i++)
        s.insert(a[i]);
    ans.push_back(*s.begin());
    for(int i = 0 ; i < n ; i++){
        s.erase(s.lower_bound(a[i-x]));
        s.insert(a[i]);
        ans.push_back(*s.begin());
    }

    for(auto i : ans) cout << i << " ";

    return 0;
}