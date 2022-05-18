//max subarry sum = Toatal sum of sub_Array - sum odf non-contributing element  
//8.6_circularArray_sum_of_subArray
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
int kadane(int a[],int n)
{
    int currentsum = 0;
    int max_sum = INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        currentsum += a[i];
        if(currentsum < 0)
        {
            currentsum = 0;
        }
        max_sum = max(max_sum,currentsum);
    }
    return max_sum;
}
 
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(a,n);
    int totalsum = 0;
    for(int i = 0 ; i < n ; i++){
        totalsum+=a[i];
        a[i]=-a[i];
    }

    wrapsum = totalsum + kadane(a,n);

    cout << max(wrapsum,nonwrapsum) << endl;
    return 0; 
}