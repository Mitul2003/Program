#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    int x , y ,k;
    cin >> x >> y >> k;

    if((x % k) == 0 && (y % k) == 0 )
        cout << "YES";
    else
        cout << "No";

    cout << endl ;

}
 
int main(){
    int t;
    cin >> t;
 
    while(t--) {
       solve();
    }
    return 0;
}