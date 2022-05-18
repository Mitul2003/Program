// find possition of element in infinite arrey

#include<iostream>
using namespace std;
int BS(int arr[],int start,int end,int ele);
int infinite(int arr[],int n,int ele){
    int start=0,end=1;
    while (ele > arr[end])
    {
        start = end;
        end = end * 2;
    }

    
    return BS(arr,start,end,ele);
} 

    int BS(int arr[],int start,int end,int ele){
        while (start<=end)
        {
            int mid = (end + start) / 2;
            if(ele == arr[mid])
            return mid;
            else if (ele < arr[mid])
            end = mid -1;
            else if (ele > arr[mid])
                start = mid + 1;                
        }
        return -1;    
    }
        
int main(){
    int ele,n = 6,arr[] = {4,5,6,7,8,9},result;
    // cout<<"Enter Size of Aree :";
    // cin>>n;

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<"Enter Your Aree :";
    //     cin>>arr[i];
    // }

    cout<<"Enter your Serch Element : ";
    cin>>ele;
    
    result=infinite(arr,n,ele);
    cout<<"Your ele. location is "<<result;

    return 0;
}