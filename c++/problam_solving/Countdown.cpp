#include<bits/stdc++.h>
using namespace std;
#define lli long long int 

 
void solve() {
    lli n,l,ans = 0;
    cin >> n;

    string s;
    cin >> s;

    l = s.length() - 1;

    for(lli i = l ; i >= 0; i--)
    {
        if((s[i] - '0') == 0)
            continue;
        else if(i == l)
            ans += (s[i] - '0');
        else
            ans += ((s[i] - '0') + 1);
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