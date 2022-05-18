#include<bits/stdc++.h>
using namespace std;
bool prime(int n) {if(n == 1) return false; for(int i = 2; i * i <= n; i++) if(n % i == 0) return false;return true;}
#define TEST int t = 1; cin >> t; while(t--) solve();
#define lli long long
#define p(A,B) pair<A,B>
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define vec(T) vector<T>
#define vv(T) vector<vector<T> >
#define maxhp(T) priority_queue<T>
#define minhp(T) priority_queue<T, vector<T> , greater<T> >
#define pb push_back
#define ff first
#define ss second
#define print(x) for(auto it:x) cout<<it<<" ";cout << endl;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define mem(n,i) memset(n, i,sizeof n)
const lli INF = 1e18;
const lli MOD = 1e9 + 7;
const lli mod = 998244353;
#define endl "\n"
void solve() {
    int n;
    cin >> n;
    if(n == 1) {
        int x, y;
        cin >> x >> y;
        if(x == y) {
            cout << x << endl;
        }
        else {
            cout << -1 << endl;
        }
        return;
    }
    map<int,int> mp;
    set<int> s;
    int mx = 0;
    for(int i = 1; i <= n*2; i++) {
        int x;
        cin >> x;
        mx = max(mx,x);
        mp[x]++;
        s.insert(x);
    }
    vec(int) tmp;
    for(auto i : s) {
        tmp.pb(i);
    }
    int mid = 0;
    if(s.size() % 2 == 0) {
        mid = tmp[s.size()/2-1];
    }
    else {
        mid = tmp[s.size()/2];
    }
    // cout << mid << endl;
    int t = 1, one = 1;
    for(auto &i : mp) {
        if(i.ss == 3) {
            if(i.ff != mid) {
                cout << -1 << endl;
                return;
            }
            else if(t) {
                t--;
            }
            else {
                cout << -1 << endl;
                return;
            }
        }
        else if(i.ss == 1) {
            if(i.ff != mx) {
                cout << -1 << endl;
                return;
            }
            else if(one) {
                one--;
            }
            else {
                cout << -1 << endl;
                return;
            }
        }
        else if(i.ss != 2) {
            cout << -1 << endl;
            return;
        }
    }
    if(one || t || s.size() != n) {
        cout << -1 << endl;
        return;
    }
    print(s);

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    TEST
    return 0;
}

