// unsorted aree in find peak Element
// peak Element -> mid-1< mid >mid+1
#include<iostream>
using namespace std;

int peak(int arr[],int n){
    int start=0,end=n-1;
    while (start <= end)
    {
        int mid = start + ((end - start)/2);
        if(mid>0 && mid<n-1)
        {
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            return arr[mid];
            else if(arr[mid - 1] > arr[mid])
            end=mid-1;
            else if(arr[mid + 1] > arr[mid])
            start = mid+1;
            else if(mid == 0)
            {
                if(arr[0] > arr[1])
                return arr[0];
                else
                return arr[1];
            }
            else if(mid == n-1)
            {
                if(arr[n-1] < arr[n+1])
                return arr[n-1];
                else
                return arr[n+1];
            }
        }
    }
    
}

int main(){
    int ele,n,arr[15],result;
    cout<<"Enter Size of Aree :";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Your Aree :";
        cin>>arr[i];
    }

    // cout<<"Enter your Serch Element : ";
    // cin>>ele;

    result=peak(arr,n);
    cout<<"Your peak Element is "<<result;
    return 0;
}