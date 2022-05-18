#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void reverse(string s) {
    if(s.length() == 0)
        return;
    
    string rev = s.substr(1);
    reverse(rev);

    cout << s[0];
}

void replacePI(string s){   
    if(s.length() == 0)
        return;

    if(s[0] == 'p' && s[1] == 'i'){
        cout << "3.14";
        replacePI(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePI(s.substr(1));
    }  
}
 
void towerofhanoic(int n, char src, char des, char helper){
    if(n == 0)
        return;
    towerofhanoic(n-1,src,helper,des);
    cout <<"Move to " << src <<" block to "<< des << endl;;
    towerofhanoic(n-1,helper,des,src);
}

string RemoveDuplicat(string s){
    if(s.length() == 0)
        return "";
    char ch = s[0];
    string ans = RemoveDuplicat(s.substr(1));
    
    if(ch == ans[0])
        return ans;
    return (ch+ans);  
}
string MoveAllXinLast(string s){
    if(s.length() == 0)
        return "";

    char ch = s[0];
    string X = MoveAllXinLast(s.substr(1));

    if(ch == 'x') return X+ch;
        return ch+X;
}

void substring(string s,string ans)
{
    if(s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char c = s[0];
    string ros = s.substr(1);   // rest of the string

    substring(ros,ans);
    substring(ros,ans+c);
}
string keyPadArr[] = {"","","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};
void keypad(string s,string ans)
{
    if(s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];

    string code = keyPadArr[ch - '0'];
    string ros = s.substr(1);

    for(int i = 0 ; i < code.length() ; i++)
    {
        keypad(ros,ans+code[i]);
    }
}

int main(){
    // string s;
    // cin >> s;

    // reverse(s);
    // cout << endl;

    // replacePI(s);
    // cout << endl;

    // towerofhanoic(4,'A','C','B');
    // cout << endl;

    // cout << RemoveDuplicat(s) << endl;

    // cout << MoveAllXinLast(s) << endl;

    // substring(s,"");
    // cout << endl;

    keypad("23","");
    cout << endl;
    return 0;
}