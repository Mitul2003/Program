#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, res = 0;
        string a, b;
        cin >> n >> a >> b;
        vector<bool> vis(n,false); // vis(n=size of vec,false=all vec.  defaulte value)
        // vector<pair<int,char>> p(10,{5,'c'});
        for(int i = 0; i < n; i++) {
            if(b[i] == '1') {
                if(a[i] == '0') {
                    res++;
                }
                else if(i > 0 && a[i-1] == '1' && !vis[i-1]) {
                    res++;
                    vis[i-1] = true;
                }
                else if(i < n-1 && a[i+1] == '1' && !vis[i+1]) {
                    vis[i+1] = true;
                    res++;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}