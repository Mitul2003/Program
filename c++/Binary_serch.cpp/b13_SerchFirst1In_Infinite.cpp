// Find the index of first 1 in a binary serch for infite
#include<iostream>
using namespace std;
int FOBS(int arr[],int start,int end,int ele);
int infinite(int arr[],int n,int ele){
    int start=0,end=1,res;
    while (ele >= arr[end])
    {
        start = end;
        end = end * 2;
    }
    // cout<<"s "<<start;
    // cout<<"e s"<<end;
    return res=FOBS(arr,start,end,ele);
}

int FOBS(int arr[],int start,int end,int ele){
    int res;
        while (start <= end)
        {
            int mid = (end + start)/2;
            if(ele == arr[mid]){
            res = mid;
            end = mid - 1;
            }
            else if (ele < arr[mid])
                end = mid - 1;           
            else if (ele > arr[mid])          
                start = mid + 1;
        }
        // cout<<"r "<<res;
        return res;
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

    cout<<"Enter your Serch Element : ";
    cin>>ele;
    
    result=infinite(arr,n,ele);
    cout<<"Your ele. location is "<<result;

    return 0;
}