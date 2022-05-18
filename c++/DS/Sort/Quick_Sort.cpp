// Divide and concourant Algooritham
// time complexity o(n2)
// small ele. pivot gretar ele.
#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define ll long long

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1; // first pointer

    for (int j = l; i < r; j++) // second Pointer
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}

void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);

        quicksort(arr, l, pi - 1);
        quicksort(arr, pi + 1, r);
    }
}

int main()
{
    int arr[5] = {5, 3, 4, 2, 1};
    cout << "1";
    // quicksort(arr, 0, 4);

    cout << "2";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}