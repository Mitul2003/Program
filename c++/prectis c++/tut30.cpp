#include<iostream>
using namespace std;

class complex
{
    int a, b;
   
    public:
    complex(int x,int y ); // constructor Declaration

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
}; 
complex ::complex(int x,int y)//------> This is parameterized constructor take 2 parametrik
{

    a = x;
    b = y;
}

int main(){
    // implicit call
    complex a(4,6);

    // Explicit call
    complex b =complex(5,7);
    a.printnumber();
    b.printnumber();

    
    return 0;
}