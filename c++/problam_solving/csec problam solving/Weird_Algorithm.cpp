#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

void solve()
{
    lli n;
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            cout << n << " ";
        }
        else
        {
            n *= 3;
            n += 1;
            cout << n << " ";
        }
    }
}

int main()
{
    int t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}