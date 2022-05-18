#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    lli n;
    cin >> n;
    int a[n];
    lli sum = 0;
    int ans = INT_MAX;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        sum += a[i];
        ans = min(ans,a[i]);
    }

    cout << (sum-ans) << endl;
    
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--) {
       solve();
    }
    return 0;
}   