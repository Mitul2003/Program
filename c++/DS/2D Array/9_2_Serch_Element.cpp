#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
void solve() {

}
 
int main(){
    int n,m; cin >> n >> m;
    int arr[n][m];
    int target; cin >> target;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    bool found = false;
    int r = 0,c = m-1; // start pointer
    while(r < n and c >= 0)
    {
        if(arr[r][c] == target){
            found = true; 
            break;
        }
        if(arr[r][c] > target)
            c--;
        else
            r++;      
    }
    if(found)
        cout << "Element founded";
    else
        cout << "Element not founded";
    return 0;
}