#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    int n;
    cin >> n;
        map<int,int> m;

        for(int i = 0 ; i < n-1 ; i++)
        {
            int arr;
            cin >> arr;
            m[arr]++;
        }
        for(int i = 1 ; i <= n ; i++)
        {
            if(m[i] == 0)
            {
                cout << i ;
            }
        }


}
 
int main(){
    int t = 1;
 
    while(t--) {
       solve();
    }
    return 0;
}