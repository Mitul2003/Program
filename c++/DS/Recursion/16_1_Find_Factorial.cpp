#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long

int fact(int n) {
    if(n == 1)
        return 1;
    int ans = n * fact(n-1);
    return ans;
}

int main(){
    int n;
    cin >> n;

    cout << fact(n) << endl;
    return 0;
}