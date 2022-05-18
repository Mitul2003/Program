#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long

int main(){
    int n,f=0;
    cin >> n;
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n%i == 0){
            cout <<"Number is non-prime" << " " <<i;
            f++;
            break;
        }
    }
    if(f == 0)
        cout << "prime";
    return 0;
}