#include<iostream>
using namespace std;

int main(){
    int arr[10],n,start=0,ele,mid;
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
        // mid=(end+start)/2;
        mid = start + (end - start)/2;
        if (ele == arr[mid])
        {
            cout<<"Aree location is : "<<mid;
            return mid;
        }
        else if (ele < arr[mid])
        {
            start = mid + 1;
        }
        else if (ele > arr[mid])
        {
            end = mid - 1;
        }
    }
    return 0;
}