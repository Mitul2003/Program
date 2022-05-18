// print and max_sum of subArray
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = INT_MIN;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int total = 0;
            for (int k = i; k <= j; k++){
                // cout << a[k] << " ";
                total += a[k];
            }
            // cout << endl;
            sum = max(sum, total);
        }
    }
    cout << sum << endl;
    return 0;
}