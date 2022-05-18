// Bitonic Array = monotonic increment & decrement(arr[i] != arr[i+1]) ex=3,5,8,10,7,4,2,1
// Search in maxmum element in bitonic array
#include<iostream>
using namespace std;

int peak(int arr[],int n){
    int start=0,end=n-1;
    while (start <  end)
    {
        int mid = start + ((end - start)/2);
   
            if(arr[mid] > arr[mid + 1])
            //we are from Desending part
            // so may be a Ans
            end=mid;
            else
            // we are assending part of arr
            start = mid+1;
    } 
    return start;
    
}

// int peak(int arr[],int n){
//     int start=0,end=n-1;
//     while (start <= end)
//     {
//         int mid = start + ((end - start)/2);
//         if(mid>0 && mid<n-1)
//         {
//             if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
//             return arr[mid];
//             else if(arr[mid - 1] > arr[mid])
//             end=mid-1;
//             else if(arr[mid + 1] > arr[mid])
//             start = mid+1;
//             else if(mid == 0)
//             {
//                 if(arr[0] > arr[1])
//                 return arr[0];
//                 else
//                 return arr[1];
//             }
//             else if(mid == n-1)
//             {
//                 if(arr[n-1] < arr[n+1])
//                 return arr[n-1];
//                 else
//                 return arr[n+1];
//             }
//         }
//     }
    
// }

int main(){
    int ele,n = 11,arr[] = {1,5,6,7,8,9,8,5,3,2,1},result; 
     

    // cout<<"Enter your Serch Element : ";
    // cin>>ele;

    result=peak(arr,n);
    cout<<"Your max. Element is "<<result;
    return 0;
}  