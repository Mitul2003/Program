#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    string s;
    cin >> n >> s;
    int c = 0;
    for(int i = 0; i < n-1; i++) {
        if(s[i] != s[i+1]) c++;
    }
    if(c&1) {
        cout << c/2+1 << endl;
    }
    else {
        cout << c/2 << endl;
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