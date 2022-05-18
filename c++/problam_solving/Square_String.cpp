#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    string s;
    cin >> s;
    string a = "xx",b = "yy";
    int n = s.length();
    bool ans = true;
    if(n % 2 == 0){
        for(int i = 0 ; i < (n/2) ; i++)
            if(s[i]!=s[(n/2)+i]){
            ans = false;
            break;
        }
    }
    else
        ans = false;
    
    if(ans) cout << "YES";
    else cout << "NO";

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