#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

void primeSieve(int n)
{
    int arr[100] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
                arr[j] = 1;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
            cout << i << " ";
    }
    cout << endl;
}

void primefactor(int n)
{
    int spf[100] = {0}; // Smallest Prime fac. Arr

    for (int i = 2; i <= n; i++)
        spf[i] = i;

    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j+=i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }

    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }

    cout << endl;
}

void prime(int n)
{
    if (n == 0 || n == 1)
        return;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return;
    }
    cout << n << " ";
}

int main()
{
    int t;
    cin >> t;

    primeSieve(t);
    // prime factorial
    primefactor(t);
    // prime number 
    for (int i = 1; i <= t; i++)
        prime(i);

    return 0;
}