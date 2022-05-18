#include <bits/stdc++.h>
using namespace std;

int n, f = 0, r = 0, que[10];
int isempty()
{
    if (f == 0)
        return 1;
    else
        return 0;
}
int isfull()
{
    if ((r + 1) % n == f || f == r + 1)
        return 1;
    else
        return 0;
}
void ins()
{
    if (isfull())
        cout << "Que. is over flow..!" << endl;
    else
    {
        int x;
        cout << "Enter element : ";
        cin >> x;
        // if(f == 0 && r == 0)
        // {
        //     f = r = 1;
        //     que[r] = x;
        // }
        if (r == n)
            r = 1;
        else
            r = r + 1;

        que[r] = x;
        if (f == 0)
            f++;
    }
    cout << endl;
}

void del()
{
    if (isempty())
        cout << "Stack is underflow..!" << endl;
    else
        cout << "Deleted element : " << que[f] << endl;;
    if (f == r)
        f = r = 0;
    if (f = n)
        f = 1;
    else
        f++;
    cout << endl;
}

int main()
{
    cout << "Enter the Size of que : ";
    cin >> n;
    int ch;
    while (1)
    {
        if (ch == 4)
            break;
        else
        {
            cout << "1 - Insert" << endl;
            cout << "2 - Delete" << endl;
            cout << "3 - Display" << endl;
            cout << "4 - Exit" << endl;

            cout << "Enter youre choice : ";
            cin >> ch;

            switch (ch)
            {
            case 1:
                ins();
                break;

            case 2:
                del();
                break;

            case 3:
                break;

            case 4:
                break;

            default:
                cout << "Invailed argument..." << endl;
            }
        }
    }

    return 0;
}