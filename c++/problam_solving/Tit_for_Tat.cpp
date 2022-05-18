#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
 
void solve() {
    lli n,k;
    cin >> n >> k;
    lli a[n];
    lli j = 0;
    

    for(lli i = 0 ; i < n ; i++)
        cin >> a[i];
    
    for(lli i = 0 ; i < k ; i++)
    {
    
        while(j < n-1 && a[j] == 0)
            j++;
        if(j >= n-1)
            break;
        a[n-1]++;
        a[j]--;
    }

    for(lli i = 0 ; i < n ; i++)
        cout << a[i] << " ";
     
    cout << endl;
}
 
int main(){
    lli t;
    cin >> t;
 
    while(t--) {
       solve();
    }
    return 0;
}