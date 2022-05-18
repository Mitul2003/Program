#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long
#define print(T, n)             \
    for (int i = 0; i < n; i++) \
        cout << T[i] << " ";

void reverseSentence(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    string s = "Hi!!! How are You ??, My Name Is Mitul...";
    reverseSentence(s);
    return 0;
}