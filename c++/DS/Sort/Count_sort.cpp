// Time Complexcity max(arr Element(Ai),N)
 
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
#define print(T,n) for(int i = 0 ; i < n ; i++) cout << T[i] << " ";
 
void countsort(int arr[],int n) {
    int k = arr[0];
    for(int  i = 0 ; i < n ; i++)
        k = max(k,arr[i]);

    int count[10] = {0};

    for(int i = 0 ; i < n ; i++)
        count[arr[i]]++;

    for(int i = 1 ; i <= k ; i++)
        count[i] += count[i-1];
    
    int output[n];

    for(int i = n-1 ; i >= 0 ; i--)
        output[--count[arr[i]]] = arr[i];
    
    for(int i = 0 ; i < n ; i++)
        arr[i] = output[i];
}
 
int main(){
    int arr[] = {1,2,6,5,5,4,3,2,4,1};
    countsort(arr,10);

   print(arr,10);

    return 0;
}