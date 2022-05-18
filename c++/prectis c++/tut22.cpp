//***Nestining of Function

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter your binary num." << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary formet" << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    chk_bin(); // nestining
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{

    cout << "Display Your ones complement Binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();  // Privet class na member no use baharthi na kari sakayyy
    b.ones();
    b.display();

    return 0;
}