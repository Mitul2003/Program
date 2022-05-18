#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
lli fac(lli n) {
    if(n == 1)
    return 1;
    return n * fac(n-1);
}
 
int main(){
        int n;
        cin >> n;
       cout << fac(n);
    return 0;
}