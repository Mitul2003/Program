#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
#define print(T,n) for(int i = 0 ; i < n ; i++) cout << T[i] << " ";
 
void insertAtBottam(stack <int> &s,int ele)
{
    if(s.empty()){
        s.push(ele);
        return;
    }

    int top = s.top();
    s.pop();

    insertAtBottam(s,ele);
    s.push(top);
}
void reversStack(stack <int> &s) {
    if(s.empty())
        return;

    int top = s.top();
    s.pop();

    reversStack(s);
    insertAtBottam(s,top);
}
 
int main(){
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reversStack(s);

    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}