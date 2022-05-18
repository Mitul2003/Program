// cell = Greatest Element From Target
// left an side move kariae tyare stor karvanu
#include<iostream>
using namespace std;
int cell(int arr[], int n, int ele)
{
    int start = 0, end = n - 1,res=-1;
    if(ele > arr[end]) return -1;
    
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (arr[mid] == ele)
            return arr[mid];
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
    int arr[15],n;
    int ele, result;
    cout << "Enter your size of aree :";
    cin >> n;
    cout << "Enter your serch element :";
    cin >> ele;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter your Aree : ";
        cin >> arr[i];
    }
    result=cell(arr,n,ele);
    cout<<"Array Element of "<<ele<<"`s cell is  "<<result;
    return 0;
}