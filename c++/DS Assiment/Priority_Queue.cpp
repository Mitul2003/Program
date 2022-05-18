#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    vector <int> v = {8,6,5,9,7,2,3};
    // maxhip
    priority_queue <int> p;
    for(auto A : v)
        p.push(A);
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }  
    cout << endl;
    // minhip
    priority_queue<int, vector<int>,greater<int>> Q;
    for(auto O : v) Q.push(O);

    while (!Q.empty())
    {
        cout << Q.top() << " ";
        Q.pop();
    }
    return 0;
}