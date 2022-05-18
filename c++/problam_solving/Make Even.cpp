#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a;
    cin >> a;
    int b = 0;
    for(int i = a.length()-1; i >= 0; i--) {
        if((a[i] - '0') % 2 == 0) {
            b++;
        }
    }
    if(b == 0) {
        cout << -1 << endl;
    }
    else if ((a[a.length() - 1] - '0') % 2 == 0)
        cout << "0";
    else if ((a[0] - '0') % 2 == 0)
        cout << "1";
    else
        cout << "2";
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