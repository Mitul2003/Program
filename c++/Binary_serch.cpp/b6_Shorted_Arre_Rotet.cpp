// find the pivot in the array
// arr = [ sorted,pivot : sorted]
// arr = [3,4,5,6,7,0,1,2]
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
        
        if(arr[mid] > arr[next])
            return mid + 1;
        if(arr[mid] < arr[pre])
            return mid;
        if(arr[mid] < arr[start])
            end = mid-1;
        else
            start = mid + 1;
    }    
    return -1;
}  

int main()
{
    int arr[] = {3,4,5,6,7,0,1,2}, n = 8;
    int ele, result;
   
    int ans = shorted(arr, n);
    if(ans == -1)
        cout << "Array is not rotted";
    else
        cout << "The arre is rotated  " << ans << " Time.";
    return 0;
}
