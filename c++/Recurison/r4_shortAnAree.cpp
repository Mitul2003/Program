#include <iostream>
#include <vector>
using namespace std;
void Display(vector<int> &c);
void insert(vector<int> &v2, int temp);
void shortt(vector<int> &v1);
int main()
{
    vector<int> v;
    int n, element;
    cout << "Enter your size of vectore : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter your aree : ";
        cin >> element;

        v.push_back(element);
    }

    shortt(v);
    Display(v);
    return 0;
}
void shortt(vector<int> &v1) // hypothesis
{
    if (v1.size() == 1) // Base conidition
        return;

    int temp = v1[v1.size() - 1]; // v = 0 1 5 2
    v1.pop_back();

    shortt(v1);

    insert(v1, temp); // indexing
}

void insert(vector<int> &v2, int temp)
{
    if (v2.size() == 0 || v2[v2.size() - 1] <= temp)
    {
        v2.push_back(temp); // Base condition
        return;
    }
    int valu = v2[v2.size() - 1]; //// 0 1  5   2
    v2.pop_back();

    insert(v2, temp);
    v2.push_back(valu);
    return;
}

void Display(vector<int> &c)
{
    cout << "Display in this Shorted vector" << endl;

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
        // cout<<c.at(i)<< " ";
    }
    cout << endl;
}
