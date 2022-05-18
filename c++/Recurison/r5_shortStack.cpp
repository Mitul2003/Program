#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &s, int temp);
void solve(stack<int> &s)
{ // hypothensis
    if (s.size() == 1)
        return; // Base Condition

    int temp = s.top();
    s.pop();

    solve(s);
    insert(s, temp); // indexing
}

void insert(stack<int> &s, int temp)    //hyponthesis
{ 
    if (s.size() == 1 || s.top() <= temp)
    {
        s.push(temp); // Base condition
        return;
    }
    int value = s.top();
    s.pop();

    insert(s, temp); // indexing
    s.push(value);
}

int main()
{
    stack<int> s;
    int n, element;

    cout << "Enter your Stack Size : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Your Stack Valu : ";
        cin >> element;
        s.push(element);   
    }
    solve(s);
        while (!s.empty())
        {
            cout<<s.top()<<" ";
            s.pop();
        }
    return 0;
}