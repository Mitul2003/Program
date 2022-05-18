#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    lli n;
    cin >> n;
    set <lli> a;
    for(lli i = 1 ; i <= sqrt(n) ; i++)
    {
        // cout << sqrt(n) << endl;
        a.insert(i);
        if((i*i*i) <= n)
            a.insert(i*i*i);
    }
    cout << a.size() << endl;
}
 
int main(){
    int t;
    cin >> t;
 
    while(t--) {
       solve();
    }
    return 0;
}                       