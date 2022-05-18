#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 

 
int main(){
    int n;
    cin >> n;
    int f=7,s=6,r=1,e=1;
    for(int i = 1 ; i <= n ; i++)
    {
        if(i%2 != 0 && i != 1)
            r++;
        else if(i%2 == 0 && i != 2)
            e++;

        for(int j = 1 ; j <=i ; j++)
        {
            if(i%2 != 0)
                cout << (f*r)<<" ";
            else
                cout << (s*e)<<" ";
        }
        cout << endl;
    }
    return 0;
}