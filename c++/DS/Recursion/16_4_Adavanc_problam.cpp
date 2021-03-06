#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void permutations(string s,string ans) {
        if(s.length() == 0){
            cout << ans << endl;
            return; 
        }

        for(int i = 0 ; i < s.length() ; i++){
            char ch = s[i];
            string ros = s.substr(0,i) + s.substr(i+1);

            permutations(ros,ans+ch);
        }
}
int countpath(int s,int e)    // dilels E = 1-6
{
    if(s == e)
        return 1;
    
    if(s > e)
        return 0;

    int count = 0;
    for(int i = 1 ; i <= 6 ; i++){
        count += countpath(s+i,e);
    }

    return count;
}

int countpathMaze(int n,int i,int j)
{
    if(i == n-1 && j == n-1)
        return 1;
    if(i >= n || j >= n)
        return 0;
    
    return countpathMaze(n,i+1,j) + countpathMaze(n,i,j+1);
}

int main(){
    
    // permutations("ABC","");

    cout << countpath(0,6) << endl;

    cout << countpathMaze(3,0,0) << endl;
    return 0; 
}