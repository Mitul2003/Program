#include <bits/stdc++.h>
using namespace std;
#define lli long long int

void solve()
{
    lli a, b, c, ans;
    cin >> a >> b >> c;

    lli D = max({a, b, c});
    int t = 0;
    t += a == D;
    t += b == D;
    t += c == D;
    
    if (t == 1)
    {
        if (D != a)
            cout << D - a + 1 << " ";
        else
            cout << "0 ";
        if (D != b)
            cout << D - b + 1 << " ";
        else
            cout << "0 ";
        if (D != c)
            cout << D - c + 1;
        else
            cout << "0";
    }
    else
    {
        cout << D - a + 1 << " "<< D - b + 1 << " "<< D - c + 1;
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