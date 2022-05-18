// cumulative sum approach
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int maxSum = INT_MIN;
    int sumOfArr[n + 1];
    sumOfArr[0] = 0;
    for (int i = 1; i <= n; i++)
        sumOfArr[i] = sumOfArr[i - 1] + a[i - 1];
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = sumOfArr[i] - sumOfArr[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;
    return 0;
}