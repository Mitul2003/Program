#include<iostream>
using namespace std;
int First_occurance(int arr[],int n,int ele){
    int start=0,mid,res1=-1;
    int end=n-1;
    while (start<=end)
    {
        mid=(end+start)/2;
        if (ele == arr[mid])
        {
            res1 = mid;
            end = mid - 1;       // First occurence
            // start = mid + 1;  // Last occurence
        }
        else if (ele < arr[mid])
        {
            end = mid-1;
        }
        else if (ele > arr[mid])
        {
            start=mid+1;
        }
    }
    return res1;
}

int last_occurance(int arr[],int n,int ele){
    int start=0,mid,res2=-1;
    int end=n-1;
    while (start<=end)
    {
        mid=(end+start)/2;
        if (ele == arr[mid])
        {
            res2 = mid;
            //end = mid - 1;       // First occurence
             start = mid + 1;  // Last occurence
        }
        else if (ele < arr[mid])
        {
            end = mid-1;
        }
        else if (ele > arr[mid])
        {
            start=mid+1;
        }
    }
    return res2;
}

int main(){
    int arr[10],n,First,last;
    int ele,result;
    cout<<"Enter your size of aree :";
    cin>>n;
    int end=n-1;
    cout<<"Enter your serch element :";
    cin>>ele;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter your Aree : ";
        cin>>arr[i];
    }
     First = First_occurance(arr,n,ele);
     last = last_occurance(arr,n,ele);
     cout<<"Count of Arre is "<<last - First + 1;
    return 0;
}
