// aree is shorted but you do not know order
#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, start = 0, ele, mid;
    cout << "Enter your size of aree :";
    cin >> n;
    int end = n - 1;
    cout << "Enter your serch element :";
    cin >> ele;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter your Aree : ";
        cin >> arr[i];
    }
    if (arr[0] > arr[1])
    {
        while (start <= end)
        {
            mid = (end + start) / 2;
            if (ele == arr[mid])
            {
                cout << "Aree location is : " << mid;
                return mid;
            }
            else if (ele < arr[mid])
            {
                start = mid + 1;
            }
            else if (ele > arr[mid])
            {
                end = mid - 1;
            }
        }
    }
    else
    {
        while (start <= end)
        {
            mid = (end + start) / 2;
            if (ele == arr[mid])
            {
                cout << "aree element location is : " << mid;
                //break;
                return mid;
            }
            else if (ele < arr[mid])
            {
                end = mid - 1;
            }
            else if (ele > arr[mid])
            {
                start = mid + 1;
            }
        }
    }
    return 0;
}