// Divide and concourant Algooritham
// Time complexity = n log n

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define print(T,n) for(int i = 0 ; i < n ; i++) cout << T[i] << " ";

void merge(int arr[],int l,int mid,int r)
{
    int n1 = mid-l+1;  // size of first arr
    int n2 = r-mid;  // size of Second arr

    // temp arrays
    int a[n1];
    int b[n2];

    for(int i = 0 ; i < n1 ; i++)
        a[i] = arr[l+i];
    

    for(int i = 0 ; i < n2 ; i++)
        b[i] = arr[mid+1+i];

    int i = 0; // arre of a travell pointer
    int j = 0; // arr of b travell pointer
    int k = l; // arr of main travell pointer

    while(i < n1 && i < n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++; i++;
        }
        else
        {
            arr[k] = b[j];
            k++; j++;
        }
    }
    while(i < n1){
        arr[k] = a[i];
        k++; i++;
    }

    while(j < n2){
        arr[k] = b[j];
        k++; j++;
    }
}

void mergsort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;

        mergsort(arr, l, mid);
        mergsort(arr, mid + 1, r);

        merge(arr,l,mid,r);   // sorted Arre
                              // L to mid & mid+1 to r
    }
}

int main()
{
    int arr[] = {5,8,3,9,1};
    mergsort(arr,0,4);

    print(arr,5);
    return 0;
}