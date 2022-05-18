#include <bits/stdc++.h>
using namespace std;
#define lli long long
long long lcm(lli a, lli b)
        {
            return (a / __gcd(a, b)) * b;
        }
void solve()
{
    lli n, k;
    cin >> n >> k;
    // int n1 = n;

    if ((n % k) == 0)
        cout << n / k;
    else
    {
       cout << lcm(n,k)/k;
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