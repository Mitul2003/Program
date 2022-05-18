#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int h, w;
    cin >> w >> h;

    long long int arr[w], temp = 1;
    long long int mod,div=0;

    for (int i = 0; i < w; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + w);


    mod = h % (arr[w - 1] + arr[w - 2]);
    div += 2 * (h / (arr[w - 1] + arr[w - 2]));
    if (h <= arr[w - 1]) // 6 <= 4
        cout << "1" << endl;
        else
    {
    if (h % (arr[w - 1] + arr[w - 2]) == 0)
        cout << "2" << endl;
    else if (mod <= arr[w - 1])
        cout << div + 1 << endl;
    else
        cout << div + 2 << endl;
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