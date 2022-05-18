#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
bool issafe(int **arr,int x,int y,int n)
{
    //Row
    for(int row = 0 ; row < x ; row++){
        if(arr[row][y] == 1)
            return false;    
    }
    //left Digonal
    int row = x;
    int col = y;
    while(row >= 0 && col >= 0){
        if(arr[row][col] == 1)
            return false;
    row--;
    col--;
    }
    //Right Digonal
    row = x;
    col = y;
    while(row >= 0 && col < n){
        if(arr[row][col] == 1)
            return false;
    row--;
    col++;
    }

    return true;
}
bool nQueen(int **arr,int x,int n) {
    if(x >= n){
        return true;
    }
    for(int col = 0 ; col < n ; col++){
        if(issafe(arr,x,col,n)){
            arr[x][col] = 1;
        if(nQueen(arr,x+1,n)){
            return true;
        }
        arr[x][col] = 0; // Back Tracking
        }
    }
    return false;
}
 
int main(){
    
    int n;
    cin >> n;

    int **arr = new int*[n];
    for(int i = 0 ; i < n ; i++){
        arr[i] = new int[n];
        for(int j = 0 ; j < n ; j++)
            arr[i][j] = 0;
    }

    if(nQueen(arr,0,n)){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cout << arr[i][j] << " ";
            }
        cout << endl;
        }
    }

    return 0;
}