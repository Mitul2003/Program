//Find minimum repit element 
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
    int minind = INT_MAX;
    int N = 1e5+2;
    int ind[N];
    for(int i = 0 ; i < N ; i++)
        ind[i] = -1;

    for(int i = 0 ; i < n ; i++)
    {
        if(ind[a[i]] == -1)
            ind[a[i]] = i;
        else
            minind = min(minind,ind[a[i]]);
    }
    if(minind == INT_MAX)
        cout << "-1" << endl;
    else
        cout << minind + 1  << endl;
 
    
    return 0;
}