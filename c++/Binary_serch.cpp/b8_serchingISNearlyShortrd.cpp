#include<iostream>
using namespace std;
int SerchINNearlyShortedArray(int arr[], int n, int ele)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (ele == arr[mid])
            return mid;
        if(arr[mid-1] >= start && arr[mid-1] == ele)
            return mid-1;
        if(arr[mid+1] <= end && arr[mid+1] == ele)
            return mid+1;
        else if (ele < arr[mid])
            end = mid - 1;
        else if (ele > arr[mid])
            start = mid + 1;
    }
    return -1;
}
int main(){
    int arr[15],n;
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
    result=SerchINNearlyShortedArray(arr,n,ele);
    cout<<"Array of Location is "<<result;
    return 0;
}