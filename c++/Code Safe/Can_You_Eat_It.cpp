#include <bits/stdc++.h>
using namespace std;
#define lli long long int

void solve()
{
    lli n, k ;
    lli ans = 0;
    cin >> n >> k;

    if (n == 0)
        cout << "0";
    else if(n  % k == 0) {
        cout << n/k;
    }
    else {
        cout << -1;
    }
    cout << endl;
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