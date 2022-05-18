#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define  ll long long
 
int get_bit(int n,int poss) {
    return (n & (1 << poss)) != 0;
}

int set_bit(int n, int poss){
    return (n | (1 << poss));
}

int clear_bit(int n, int poss){
    return (n & ~(1 << poss));
}
int updat_bit(int n,int poss,int update){
    if(update == 0) {return (n & ~(1 << poss));}
    else {return (n | (1 << poss));}
}
bitset<32> b(256);
 
int main(){
    // int n,poss;
    // cin >> n >> poss;
    cout << get_bit(5,2) << endl;
    cout << set_bit(5,1) << endl;
    cout << clear_bit(5,2) << endl;
    cout << updat_bit(5,2,0) << endl;
    // cout << b << endl;

    return 0;
}