#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
 
int main(){
    int n;
    int maxsum = INT_MIN;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int currentSum = 0;
    for(int i = 0 ; i < n ; i++){
        currentSum += a[i];
        if(currentSum < 0)
            currentSum = 0;
        maxsum = max(maxsum,currentSum);
    }
    cout << maxsum << endl;
    return 0;
}