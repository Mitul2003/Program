#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    int n,k;
    cin >> n >> k;
    n = n-1;
    string s,temp;
    cin >> s;
    int f = 0, l = k,i = 0;
    int flag = 1;
    while(i<l)
    {
        if(flag) {
            temp += s[i];
            flag = 0;
            i++;
        }
        else {
            temp += s[l-1-i];
            flag = 1;
            l--;
        }
    }
    reverse(temp.begin(),temp.end());
    cout << temp ;
    for(int i = k; i <= n ; i++)
        cout << s[i] ;
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