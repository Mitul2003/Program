#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

void solve()
{
    int ans;
    lli a[7];
    for (int i = 0; i < 7; i++)
        cin >> a[i];
    int sum = a[6];
    sum = sum - a[0] - a[1];
    if((sum = sum-a[2]) == 0)
        ans =a[2];
    else
        ans = a[3];

    cout << a[0] <<" "<< a[1] <<" "<< ans << " " <<  endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}