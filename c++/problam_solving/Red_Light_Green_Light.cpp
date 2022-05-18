#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    int n,k;
    cin >> n >> k;
    int a[n];
    int ans = 0;
    int ans1 = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        if(a[i] > k)
            ans++;
        if(a[i] == k)
            ans1++;
    }
    
    
        cout << ans << endl;
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--) {
       solve();
    }
    return 0;
}