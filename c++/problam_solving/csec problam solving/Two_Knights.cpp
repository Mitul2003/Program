#include<bits/stdc++.h>
using namespace std;

int main(){
long long int  n;
cin >> n;

for(long long int i = 1 ; i <= n; i++)
    cout << ((i-1) * (i+4) * ((i*i) - (3*i) + 4)) / 2 << endl;
return 0;
}