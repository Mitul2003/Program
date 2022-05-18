#include <iostream>
using namespace std;
int min(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (end + start) / 2;
        int next = (mid + 1) % n;
        int pre = (mid + n - 1) % n;
        if (arr[mid] <= arr[next] && arr[mid] <= arr[pre])
            return mid; // case 1
        else if (arr[mid] <= arr[end])
            end = mid - 1;
        else if (arr[mid] >= arr[start])
            start = mid + 1;
    }
}
int fbs(int arr[], int n, int ele, int min)
{
    int start = 0, end = min - 1;
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (ele == arr[mid])
            return mid;
        else if (ele < arr[mid])
            end = mid - 1;
        else if (ele > arr[mid])
            start = mid + 1;
    }
    return -1;
}

int sbs(int arr[], int n, int ele, int min)
{
    int start = min, end = n - 1;
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (ele == arr[mid])
            return mid;
        else if (ele < arr[mid])
            end = mid - 1;
        else if (ele > arr[mid])
            start = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[15], n, index, FBS, SBS;
    int ele, result;
    cout << "Enter your size of aree :";
    cin >> n;
    cout << "Enter your serch element :";
    cin >> ele;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter your Aree : ";
        cin >> arr[i];
    }
    index = min(arr, n);
    FBS = fbs(arr, n, ele, index);
    SBS = sbs(arr, n, ele, index);

    if(FBS >= 0 )
    cout<<"Element location founded "<<FBS;
    else if(SBS >= 0 )
    cout<<"Element location founded "<<SBS;
    else
    cout<<"Element is not Founded";
    return 0;
}
