#include<bits/stdc++.h>
using namespace std;
 #define ll long long
void solve() {
    ll  s,a,b;
    long double c,x;
    cin >> s >> a >> b >> c;
    long double y = (s*c)/100;

    x = s + y;
    if (x >= a && x <= b)
        cout << "Yes";
    else
        cout << "No"; 
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