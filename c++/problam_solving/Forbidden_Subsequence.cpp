#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    string a, b;
    cin >> a >> b;
    int n = a.size();
    sort(a.begin(),b.end());
    int a1 = 0, b1 = 0, c = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == 'a') a1++;
        else if(a[i] == 'b') b1++;
        else if(a[i] == 'c') c++;
    }
    if(n <= 2 || a1 == 0 || b1 == 0 || c == 0) {
        cout << a << endl;
    }
    else if(b != "abc") {
        cout << a << endl;
    }
    else {
        while(a1--) cout << 'a';
        while(c--) cout << 'c';
        while(b1--) cout << 'b';
        for(int i = 0; i < n; i++) {
            if(a[i] == 'a' || a[i] == 'b' || a[i] == 'c') continue;
            cout << a[i];
        } 
        cout << endl;
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