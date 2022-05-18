// Nitin = nitiN
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 

 
int main(){
    int n;
    cin >> n;

    char c[n+1];
    cin >> c;

    bool check = true;
    for(int i = 0 ; i < n ; i++)
    {
        if(c[i] != c[n-1-i])
        {
            check = false;
            break;
        }
    }

    if(check) cout << "word is pelindrom";
    else cout << "word is not pelindrom";


    return 0;
}