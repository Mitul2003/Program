#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
int first(int arr[],int n,int i ,int ele) {
    if(i == n) return -1;

    if(arr[i] == ele) return i;
    return first(arr,n,i+1,ele);
}
 
int last(int arr[],int n,int i ,int ele) {
    if(i == n) return -1;
 
    int ans = last(arr,n,i+1,ele);
    if(ans != -1) return ans;
    if(arr[i] == ele) return i;
    return -1;
}

 
int main(){
    int arr[] = {1,5,6,8,6};

    cout << first(arr,5,0,6) << " ";
    cout << last(arr,5,0,6);
    return 0;
}