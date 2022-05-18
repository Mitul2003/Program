#include <iostream>
using namespace std;
int shorted(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        if (arr[0] < arr[end])   return start; //case 1
        int mid = (end + start) / 2;
        int next = (mid + 1) % n;
        int pre = (mid + n - 1) % n;
        if (arr[mid] <= arr[next] && arr[mid] <= arr[pre])
            return mid; // case 2
        else if (arr[mid] <= arr[end])
            end = mid - 1;
        else if (arr[mid] >= arr[start])
            start = mid + 1;
    }
}

int main()
{
    int arr[15], n, First, last;
    int ele, result;
    cout << "Enter your size of aree :";
    cin >> n;
    int end = n - 1;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter your Aree : ";
        cin >> arr[i];
    }

    cout << "The arre is rotated  " << shorted(arr, n) << " Time.";
    return 0;
}
