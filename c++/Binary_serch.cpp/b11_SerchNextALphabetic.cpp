#include<iostream>
using namespace std;
int NextCharter(char arr[], int n, char ele)
{
    int start = 0, end = n - 1;
    char res='#';
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (arr[mid] == ele)
            start = mid + 1;
        else if (arr[mid] < ele)
            start = mid + 1;
        else if (arr[mid] > ele){
            res = arr[mid];
            end = mid - 1;
        }
    }
    return res;
}
int main(){
    char arr[15],ele,result;
    int n;
    cout << "Enter your size of aree :";
    cin >> n;
    cout << "Enter your serch element :";
    cin >> ele;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter your Aree : ";
        cin >> arr[i];
    }
    result=NextCharter(arr,n,ele);
    cout<<"Array Element of "<<ele<<"`s next element is  "<<result;
    return 0;
}