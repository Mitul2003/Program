#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    int e = 0;
        string s;
        cin >> s;
        for(char c : s) if(c == 'N') e++;
        if(e == 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--) {
       solve();
    }
    return 0;
}