// Serch in row  wise  and colum wise sorted Arrey --> row pan shorted hoy && colum pan shorted hoy
#include<iostream>
using namespace std;
int arr[15][15];
int a[2];
int Two(int n,int m,int ele){
    int i=0,j=m-1;
    while (i>=0 && i<n && j>=0 && j<n)
    {
        if(arr[i][j] == ele)
        {
            a[0] = i;
            a[1] = j;
            return 1;
        }
        
        else if (arr[i][j] > ele)
        j--;
        else if (arr[i][j] < ele)
        i++;
    }
    return -1;
}
int main(){
    int ele,n,m;
    int result=1;
    cout<<"Enter Size of Aree in row :";
    cin>>n;
    cout<<"Enter Size of Aree in colum :";
    cin>>m;

    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < m; j++)
        {
            cout<<"Enter Your Aree of arr["<<i<<"]"<<"["<<j<<"] : ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<"Enter your Serch Element : ";
    cin>>ele;

    result=Two(n,m,ele);
    if(result < 1)
    cout<<"Aree of location is not found"<<result;
    else
    cout<<"\nYour aree of location is arr["<<a[0]<<"]"<<"["<<a[1]<<"]";

    return 0;
}