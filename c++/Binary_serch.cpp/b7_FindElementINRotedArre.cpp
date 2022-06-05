#include <iostream>
using namespace std;
int min(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        // 4 cases over here

        int mid = start + (end - start) / 2;
        int next = (mid + 1) % n;
        int pre = (mid + n - 1) % n;

        if (arr[mid] > arr[next])
            return mid;

        if (arr[mid] < arr[pre])
            return mid - 1;

        // when Array not have Duplicat value..

        // if (arr[mid] <= arr[start])
        //     end = mid - 1;
        // else
        //     start = mid + 1;

        // when array have duplicat value

        // if elements at middle, start, end are equal then just skip the duplicates
            if (arr[mid] == arr[start] && arr[mid] == arr[end]) {
                // skip the duplicates
                // NOTE: what if these elements at start and end were the pivot??
                // check if start is pivot
                if (start < end && arr[start] > arr[start + 1]) {
                    return start;
                }
                start++;

                // check whether end is pivot
                 if (end > start && arr[end] < arr[end - 1]) {
                    return end - 1;
                }
                end--;
            }
            // left side is sorted, so pivot should be in right
            else if(arr[start] < arr[mid] || (arr[start] == arr[mid] && arr[mid] > arr[end])) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
    }
    return -1;
}
int bs(int arr[], int n, int ele, int start, int end)
{
    // int start = 0, end = min - 1;
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

int serch(int arr[], int n, int ele)
{
    int index = min(arr, n);
    if (index == -1)
        // just do normal binary sarch
        return bs(arr, n, ele, 0, n - 1);
    if (ele >= arr[0])
        return bs(arr, n, ele, 0, index - 1);
    return bs(arr, n, ele, index + 1, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 4, 2, 1}, n = 8, index, FBS = -1, SBS = -1;
    int ele, result;
    cout << "Enter your serch element :";
    cin >> ele;

    cout << "Element index is : " << serch(arr, n, ele);

    return 0;
}
