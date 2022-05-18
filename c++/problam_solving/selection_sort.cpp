#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    int min, j;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (auto &p : arr)
        cin >> p;
    selection_sort(arr, n);
    return 0;
}