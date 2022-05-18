#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
#define print(T,n) for(int i = 0 ; i < n ; i++) cout << T[i] << " ";
 
class Stack{
    int N;
    queue <int> q1;
    queue <int> q2;
    public:
    Stack(){
        N = 0;   
    }

    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue <int> temp = q1;
        q1 = q2;
        q2 = temp; 
    }

    void pop(){
        q1.pop();
        N--;
    }

    int top(){
        return q1.front();
    }

    int size(){
        return N;
    }
};
 
int main(){
    Stack s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    cout << s1.top() << endl;

    s1.pop();

    cout << s1.top() << endl;

    cout << s1.size() << endl;
    return 0;
}