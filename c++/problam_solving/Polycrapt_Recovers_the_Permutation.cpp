#include<bits/stdc++.h>
using namespace std;
#define TEST int t = 1; cin >> t; while(t--) solve();
#define lli long long
#define vec(T) vector<T>
#define pb push_back
#define print(x) for(auto it:x) cout<<it<<" ";cout << endl;
#define endl "\n"
void solve() {
    int n;
    cin >> n;
    vec(int) a(n+1);
    for(int i = 1 ; i <= n; i++) {
        cin >> a[i];
    }
    deque<int> q;
    for(int i = 1, j = n; i < j; i++,j--) {
        q.push_front(a[i]);
        q.push_back(a[j]);
    }
    if(n&1) {
        q.push_back(a[n/2+1]);
    }
    deque<int> q2 = q;
    vec(int) t;
    while(!q.empty()) {
       t.push_back(q.front());
       q.pop_front();
    }
    deque<int>q3;
    while(!q2.empty()) {
        if(q2.front() == q2.back()) {
            q3.push_back(q2.back());
          q2.pop_back();
        }
         else if(q2.front() > q2.back()) {
          q3.push_back(q2.back());
          q2.pop_back();
         }
         else {
           q3.push_front(q2.front());
           q2.pop_front();
          }
      }

      int i = 1;
    while(!q3.empty()) {
       if(i == 1) {
          if(a[i] == q3.front()) {
             i++;
             q3.pop_front();
          }
          else if(a[i] == q3.back()) {
             i++;
             q3.pop_back();
          }
          else {
             cout << -1 << endl;
             return;
          }
       }
       else {
          if(a[i] != q3.front()) {
            cout << a[i] << " " << q3.front() << endl;
             cout << -1 << endl;
             return;
          }
          else {
             i++;
             q3.pop_front();
          }
       }
    }
    print(t);

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    TEST
    return 0;
}