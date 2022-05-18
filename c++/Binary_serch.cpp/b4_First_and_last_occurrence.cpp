#include<iostream>
using namespace std;

int main(){
    int arr[10],n,start=0,ele,mid;
    int res=-1;
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

    while (start<=end)
    {
        mid=start+ (end-start)/2;
        if (ele == arr[mid])
        {
            res = mid;
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
    
    cout<<"First occurence location is "<<res;
    return 0;
}
