#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;           //5
    int ar[n+1] = {};
    int res = INT_MIN; //frequancy
    // 0 1 2 3 4 5
    // 0 0 0 0 0 0 // default valu in ar
    /*
    
    */
    for(int i = 0; i < n; i++) {
        int a;   
        cin >> a;  // 4
        ar[a]++;
        res = max(res,ar[a]);
    }
    cout << res << endl;
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--) {
       solve();
    }
    return 0;
}