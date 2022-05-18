#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

void solve()
{
    string s;
    cin >> s;
    int res = 1;
    for (int i = 0; i < s.length(); i++)
    {
        int tre = 1;
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                i = j;
                tre++;
            }
            else
            {
                i = j - 1;
                break;
            }
        }
        res = max(res, tre);
    }
    cout << res << endl;
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