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
    int max = INT_MIN;
    int ans = 0;
    int j=0;
    while(j < n)
    {
        if(max < a[j])
        {
            max = a[j];
            if(a[j] > a[j+1])
                ans++;
        }
        j++;
    }
    cout << ans << endl;
    return 0;
}