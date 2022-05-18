// FLoor = Smallest  Element From target
// right an side move kariae tyare stor karvanu
#include<iostream>
using namespace std;
int Floor(int arr[], int n, int ele)
{
    int start = 0, end = n - 1,res=-1;
    if(ele < arr[start]) return -1;

    while (start <= end)
    {
        //comment
        int mid = (end + start) / 2;
        if (arr[mid] == ele)
            return arr[mid];
        else if (arr[mid] < ele){
            res = arr[mid];
            start = mid + 1;
        }
        else if (arr[mid] > ele)
            end = mid - 1;
    }
    return res;
}
int main(){
    int arr[] = {5,6,7,8,10,15},n = 6;
    int ele, result;
     
    cout << "Enter your serch element :";
    cin >> ele;

    
    result=Floor(arr,n,ele);
    cout<<"Array Element of "<<ele<<"`s floor is  "<<result;
    return 0;
}