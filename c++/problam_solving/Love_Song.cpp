#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int n,q;
    cin >> n >> q;

    string s;
    int arr[n+1];
    arr[0] = 0;
    cin >> s;

    for( int i = 0 ; i < n ; i++)
    {
        arr[i+1] = arr[i] + ( s[i] - 'a' ) + 1;
    }

    while(q--)
    {
        int l,r;
        cin >> l >> r;

        cout << arr[r] - arr[l-1] << endl;
    }



}
 
int main(){
    int t = 1;
    while(t--) {
       solve();
    }
    return 0;
}