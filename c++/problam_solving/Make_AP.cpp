#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    int a,b,c;
    cin >> a >> b >> c;

    if((b-a) == (c-b)) {cout << "YES" << endl; return;}
    else if((a+c)%(2*b) == 0) {cout << "YES" << endl; return;}
    else if((2*b)-a > 0) if((2*b-a) % c == 0) {cout << "YES" << endl; return;}
    else if(2*b-c > 0) if((2*b-c) % a == 0) {cout << "YES" << endl; return;}

    cout << "NO" << endl;
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--) {
       solve();
    }
    return 0;
}