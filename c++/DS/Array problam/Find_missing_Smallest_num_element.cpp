//smallest possitive number
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
 
int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    int N = 1e6+2;

    bool ind[N];
    for(int i = 0 ; i < N ; i++)
        ind[i] = false;
    
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] >= 0)
            ind[a[i]] = true;
    }
    int ans = -1;
    for(int  i = 0 ; i < n ; i++)
    {
        if(ind[i] == false)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}