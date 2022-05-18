#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {
    int n;
    string ans = "";
    vector <lli> a,b;
    cin >> n;

    int arr[n+1];
    arr[0]=0;
    lli sum = n*(n+1)/2;
    for(int i = 1 ; i < n+1 ; i++)
        arr[i]=i;

    if(sum % 2 == 0)
    {
        if(n % 4 == 0)
        {   
            ans = "YES";
            for(int i = 1 ; i <= n/4 ; i++)
                a.push_back(i);
            for(int i = 0 ; i < n/4 ; i++)
                a.push_back(arr[n-i]);
            for(int i = n/4+1 ; i < a[a.size()-1] ; i++)
                b.push_back(i);
        }
    
        else if(n % 4 == 3)
        {
            vector <int> c;
            ans = "YES";
            for(int i = 4 ; i < n+1 ; i++)
                c.push_back(i);
            a.push_back(1);
            a.push_back(2);
            b.push_back(3);
            for(int i = 0 ; i < (n-3)/4;i++)
            {
                a.push_back(c[i]);
                a.push_back(c[c.size()-1-i]);
            }
            for(int i = 4+(n-3)/4 ; i <= n-(n-3)/4 ; i++)
                b.push_back(i);
        }
    }
    else
        cout << "NO" << endl;
    if(ans == "YES")
    {
        cout << ans << endl;
        cout << a.size() << endl;
        for(int i : a) cout << i <<" ";
        cout << endl;
        cout << b.size() << endl;
        for(int i : b) cout << i <<" ";
        cout << endl;
    }
}
 
int main(){
    int t = 1;
   
 
    while(t--) {
       solve();
    }
    return 0;
}