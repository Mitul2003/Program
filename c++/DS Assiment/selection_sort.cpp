#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selec(int a[],int n)
{
    int j;
    for(int i = 0 ; i < n ; i++)
    {
        for(j = i + 1 ; j < n ; j++)
        {
            if(a[j] < a[i])
                swap(&a[i],&a[j]);             
        }
    }
}
 
int main(){
    int arr[] = {8,6,3,7,9,1};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    selec(arr,n);
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}