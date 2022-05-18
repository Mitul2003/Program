#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
int main(){
    int n;
    cin >> n;

    for(int i = 1 ; i <=n ; i++)
    {
        for(int j = 1 ; j <= i; j++)
            cout <<"*";
        int Space = 2*n - 2*i;
        for (int j = 1 - 1; j < Space; j++)
            cout<<" ";
        for(int j = 1 ; j <= i; j++)
            cout <<"*";  
        cout << endl;   
    }
    for(int i = n ; i >=1 ; i--)
    {
        for(int j = 1 ; j <= i; j++)
            cout <<"*";
        int Space = 2*n - 2*i;
        for (int j = 1 - 1; j < Space; j++)
            cout<<" ";
        for(int j = 1 ; j <= i; j++)
            cout <<"*";  
        cout << endl;   
    }
    return 0;
}