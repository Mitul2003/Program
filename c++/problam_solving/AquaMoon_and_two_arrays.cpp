#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n], sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum1 += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        sum2 += b[i];
    }
    if (sum1 != sum2)
    {
        cout << "-1" << endl;
    }
    else
    {
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                for (int j = 0; j < n; j++)
                {
                    if (j == i)
                        continue;
                    else if (a[j] > b[j])
                    {
                        while (a[i] < b[i] && a[j] > b[j])
                        {
                            a[i]++;
                            a[j]--;
                            v.push_back({j + 1, i + 1});
                        }
                    }
                }
            }
        }
        cout << v.size() << endl;

        for (auto ans : v)
        {
            cout << ans.first << " " << ans.second << endl;
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