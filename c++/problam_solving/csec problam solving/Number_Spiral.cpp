#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    lli x,y;
    cin >> x >> y;
    lli ans;
    if(x<y)
    {
        if(y%2 == 0) ans = (y-1)*(y-1)+x;
        else ans = (y*y) - x+1;
    }
    else
    {
        if(x%2 == 0) ans=(x*x)-y+1;
        else ans = (x-1)*(x-1)+y;
    }
    cout << ans << endl;
}
 
int main(){
    int t ;
    cin >> t;
 
    while(t--) {
       solve();
    }
    return 0;
}