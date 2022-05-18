#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s, p;
    cin >> s >> p;
    int ans = 0;
    int v = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != p[i])
        {
            if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u'))
            {
                ans = ans + 2;
            }
            else if ((s[i] == '?') || (p[i] == '?'))
            {
                if (((s[i] == '?') && (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u')) || ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (p[i] == '?')))
                {
                    c++;
                }
                else
                {
                    v++;
                }
            }
            else if ((s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') && (p[i] != 'a' && p[i] != 'e' && p[i] != 'i' && p[i] != 'o' && p[i] != 'u'))
            {
                ans = ans + 2;
            }
            else
            {
                ans++;
            }
        }
    }

    if (c == 1 || v == 1)
    {
        if (((c == 1) && (v == 0)) || ((c == 0) && (v == 1)))
        {
            cout << ans << endl;
        }
        else
        {
            ans += 1;
            cout << ans << endl;
        }
    }
    else
    {
        if (c <= v)
        {
            if (c <= v && c > 0)
            {
                ans += (c * 2);
                ans += v;
                ans--;
                cout << ans << endl;
            }
            else
            {
                ans += (c * 2);
                ans += v;
                cout << ans << endl;
            }
        }
        else
        {
            if (c >= v && v > 0)
            {
                ans += c;
                ans += (v * 2);
                ans--;
                cout << ans << endl;
            }
            else
            {
                ans += c;
                ans += (v * 2);
                cout << ans << endl;
            }
        }
    }
        

    
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