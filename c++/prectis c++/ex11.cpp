#include<bits/stdc++.h>
using namespace std;
class a
{
    public:
        static int count;
        static void b()
        {
            cout << count << endl;
        }
};
int a :: count = 10;
int main(){
// char ch;
// cin >> ch;
// if (ch >= 'A' && ch <= 'Z')
//         cout<< ch << " is an UpperCase character\n";
 
//     else if (ch >= 'a' && ch <= 'z')
//     cout<< ch << " is an LowerCase character\n";

//     else if(ch >= '0' && ch <= '9')
//      cout << "number";
             
 
//     else
//         cout<< ch << " is not an aplhabetic character\n";

// char a = 'Z';

// cout << a;

// a = a + 32;
// cout << a;
a a1;
a1.b();
a :: b();

return 0;
}