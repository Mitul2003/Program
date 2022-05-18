#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
int friendsPairing(int n) {
    if(n == 0 || n == 1 || n == 2)
        return n;
    
    return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
}

int knapsackProblem(int value[],int wt[],int n, int w)
{
    if(n == 0 || w == 0)
        return 0;
    if(wt[n-1] > w)
        return knapsackProblem(value,wt,n-1,w);

    return max(knapsackProblem(value,wt,n-1,w-wt[n-1])+value[n-1],knapsackProblem(value,wt,n-1,w));
}
 
int main(){
    int wt[] = {10,20,30};
    int value[] = {100,50,150};
    int w = 50;

    // cout << friendsPairing(4) << endl;

    cout << knapsackProblem(value,wt,3,w) << endl;
    return 0;
}