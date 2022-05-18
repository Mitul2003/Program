#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
 
int main(){
    int n,k;
    cin >> n >> k;
    
    int a[n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    
    sort(a,a+n);
    int low = 0;
    int high = n-1;

    while(low<high)
    {
        if(a[low]+a[high] == k){
            cout << low << " " << high << endl;
            break;
        }
        else if(a[low]+a[high] < k)
            low++; 
        else if(a[low]+a[high] > k)
            high--;
    }
    return 0;
}