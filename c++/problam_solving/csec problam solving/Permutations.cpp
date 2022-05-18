#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    int n;
    cin >> n ;

    vector <int> v;
    int i = 1 , j = 2;
    while (j <= n)      
    {
        v.push_back(j);
        j+=2;
    }
    while (i <= n)      
    {
        v.push_back(i);
        i+=2;
    }
    if(n == 1)
        cout << 1;
    else if (n == 2)
        cout << "NO SOLUTION";
    else if( n == 3)
        cout << "NO SOLUTION";
    else
            for(auto a : v)  cout << a << " ";
}
 
int main(){
    int t = 1;
 
    while(t--) {
       solve();
    }
    return 0;
}