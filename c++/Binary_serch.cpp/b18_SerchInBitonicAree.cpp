#include<iostream>
using namespace std;

int peak(int arr[],int n){
    int start=0,end=n-1;
    while (start < end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] > arr[mid + 1])
            end = mid;
        else
            start = mid + 1;
    } 
    return start;
    
}

int Abs(int arr[],int ele, int peak)
{
    int start = 0, end = peak - 1;
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

int Dbs(int arr[], int n, int ele, int peak)
{
    int start = peak, end = n - 1;
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (ele == arr[mid])
            return mid;
        else if (ele < arr[mid])        
        start = mid + 1;
        else if (ele > arr[mid])        
        end = mid - 1;       
    }
    return -1;
}
int main(){
    int ele,n = 11,arr[] = {1,2,3,4,5,6,5,4,3,2,1};
    int r1,r2,r3,result;
    // cout<<"Enter Size of Aree :";
    // cin>>n;

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"Enter Your Aree :";
    //     cin>>arr[i];
    // }

    cout<<"Enter your Serch Element : ";
    cin>>ele;

    r1=peak(arr,n);
    r2=Abs(arr,ele,r1);
    r3=Dbs(arr,n,ele,r1);

    if(r2 >= 0)
    cout<<"Your small. Index of Element  is "<<r2;
    else
    cout<<"Your max. Element is "<<r3;
    
    return 0;
}