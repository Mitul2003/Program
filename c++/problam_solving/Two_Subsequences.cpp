#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    string s;
    cin >> s;
    char ans = 'z';
    int n = s.size() - 1;
    for(int i = 0 ; i <= n ; i++)
    {
        if(s[i] < ans)
            ans = s[i];
    }
    int t=1;
    cout << ans << " ";
    for(int i = 0 ; i <= n ; i++)
    {
        if(s[i] == ans && t == 1)
        {
            t--;
            continue;
        }
        else
            cout << s[i] ;
    }
    cout << endl;
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--) {
       solve();
    }
    return 0;
}