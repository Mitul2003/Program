#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define  ll long long
 
void solve() {
    ll n;
    cin >> n;

    ll a[n],ans = 0;

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    
    for(int i = 1 ; i < n ; i++)
    {
        if(a[i] < a[i-1])
        {
            ans += (a[i-1] - a[i]);
            a[i] = a[i-1];
        }
    }
    cout << ans << endl;
}
 
int main(){
 
       solve();
    
    return 0;
}