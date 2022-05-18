#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
bool ispower(int n){
    return (n && !(n & n-1));
}

int countNumberOns(int n){
    int ans = 0;
    while(n){
        n = (n & n-1);
        ans++;
    }
    return ans;
}

 
int main(){
    cout << ispower(256) << endl;
    cout << countNumberOns(19) << endl;
    return 0;
}