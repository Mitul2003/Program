#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
int gcd(int a,int b) {
    while(b != 0){
        int rem = a%b;  //  cout << rem << endl;
        a = b;
        b = rem;
    }
    return a;
}
 
int main(){
    int a,b;
    cin >> a >> b;

 
    cout << gcd(a,b) << endl;;
    
    return 0;
}