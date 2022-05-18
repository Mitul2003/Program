#include<iostream>
using namespace std;
// normal binary serch ma element no hoy to start and end teni ajubjuna hoy tya jj point kare
int BSWITHDIFFRENT(int arr[],int n,int ele){
        int start=0,end=n-1;
        int r1,r2;
        while (start<=end)
        {
            int mid = (end + start) / 2;
            if(ele == arr[mid])
            return 0;
            else if (ele < arr[mid])
            end = mid -1;
            else if (ele > arr[mid])
            start = mid + 1;                
        }
        r1=(arr[start] - ele);
        r2=(ele - arr[end]);
        if(r1<=r2)
        return r1;
        else
        return r2;
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
    
    result=BSWITHDIFFRENT(arr,n,ele);
    cout<<"Your Areey of ele. in minimum diffrent is "<<result;

    return 0;
}