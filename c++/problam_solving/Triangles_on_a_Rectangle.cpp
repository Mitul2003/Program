#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    lli w, h;
    cin >> w >> h;
    int x = 4;
    vector<lli> l;
    for(int i = 0; i < x; i++) {
        int j;
        cin >> j;
        vector<lli> m(j);
        for(lli &i : m) cin >> i;
        l.push_back(m[j-1] - m[0]);
    }
    lli result = 0;
    result = max(result, w * l[2]);
    result = max(result, w * l[3]);
    result = max(result, h * l[0]);
    result = max(result, h * l[1]);
    cout << result << endl;
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--) {
       solve();
    }
    return 0;
}