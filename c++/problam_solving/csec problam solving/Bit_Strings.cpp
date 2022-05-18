#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
const lli M = 1e9 + 7;
 
void solve() {
    int n,ans=1;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
       ans = (ans*2)%M;

    cout << ans << endl; 
}
 
int main(){
    int t = 1;
 
    while(t--) {
       solve();
    }
    return 0;
}