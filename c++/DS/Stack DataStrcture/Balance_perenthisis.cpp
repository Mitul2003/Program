#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
#define print(T,n) for(int i = 0 ; i < n ; i++) cout << T[i] << " ";
 
bool BalancePerenthis(string s) {
    stack <char> st;

    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if(!st.empty() && s[i] == ')') if(st.top() == '(') st.pop();
            else return false;
            if(!st.empty() && s[i] == '}') if(st.top() == '{') st.pop();
            else return false;
            if(!st.empty() && s[i] == ']') if(st.top() == '[') st.pop();
            else return false;
        }
    }
    return true;
}
 
int main(){
    string s = "[{()}]";
    if(BalancePerenthis(s))
        cout << "valid" << endl;
    else
        cout << "Invalid" << endl;
}