#include <bits/stdc++.h>
using namespace std;
#define lli long long int


void solve()
{
    lli a,b;
    cin >> a >> b;

    lli sum = a + b;
    lli ans = sum / 4;

    if (a == 0 || b == 0)
        cout << "0";
    else if (sum >= 4)
    {
        if (a == 1 || b == 1)
            cout << "1";
        else if (a >= ans && b >= ans)
            cout << ans;
        else
            cout << min({a, b});
    }
    else
        cout << "0";
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