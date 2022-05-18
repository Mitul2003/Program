#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
int main(){

    int n;
    cin >> n;

    for(int i = 1 ; i <=n ; i++)
    {
        for(int j = 1 ; j <=n-i ; j++)
            cout << "  ";
        int k = (i+i)-1;
        while(k--)
            cout << "* "; 
        cout << endl;
    }
    for(int i = n ; i >=1 ; i--)
    {
        for(int j = 1 ; j <=n-i ; j++)
            cout << "  ";
        int k = (i+i)-1;
        while(k--)
            cout << "* "; 
        cout << endl;
    }
    return 0;
}