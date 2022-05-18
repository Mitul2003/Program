#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    int n;
    cin >> n;

    lli m = n-1;
    lli i = 1;
    int ans = 0;
    while(i < m)
    {
        if(m%i == 0)
            ans++;
        i++;
    }
    cout << ++ans << endl;
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--) {
       solve();
    }
    return 0;
}