#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
#define print(T,n) for(int i = 0 ; i < n ; i++) cout << T[i] << " ";
#define endl "\n"
 
 
int main(){
   deque <int> d;

   d.push_back(1);
   d.push_back(2);
   d.push_front(3);
   d.push_front(4);

   for(auto i : d) cout << i << " ";
   cout << endl; 

   d.pop_back();
   d.pop_front();

   for(auto i : d) cout << i << " ";

    return 0;
}