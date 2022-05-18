#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define  ll long long
 
int fibonaci(int n) {

        if(n == 0 || n == 1){  
            return n;
        }

        return fibonaci(n-1) + fibonaci(n-2);
}

int fibonacci(int n){
        static int a=0,b=1,ans;
    if(n > 0)
    {
        ans= a+b;
        a = b;
        b = ans;
        cout << ans << " ";
        fibonacci(n-1);
    }
}
 
int main(){
    int n;
    cin >> n;
    // nth fibonaki number
    cout << fibonaci(n) << endl;

    cout << "0" << " " << "1" << " ";
    fibonacci(n-1);
    return 0;
} 