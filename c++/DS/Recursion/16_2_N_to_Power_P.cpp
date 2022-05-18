#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
int power(int n , int  p) {
        if(p == 0)
            return 1;

        int ans = n * power(n,p-1);
        return ans;
}
 
int main(){
    int n,p;
    cin >> n >> p;

    cout << power(n,p) << endl;
    return 0;
}   