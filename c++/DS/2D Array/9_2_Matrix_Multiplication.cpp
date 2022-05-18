#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ll long long

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int A[n1][n2];
    int B[n2][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
            cin >> A[i][j];
    }

    for(int i = 0 ; i < n2 ; i++){
        for(int j = 0 ; j < n3 ; j++)
            cin >> B[i][j];
    }
    
    int c[n1][n3];
    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j < n3 ; j++)
            c[i][j] = 0;
    }

    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j < n3 ; j++){
            for(int k = 0 ; k < n2 ; k++){
                c[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j < n3 ; j++)
            cout << c[i][j] << " ";
        cout << endl ;
    }
    return 0;
}