// arr of size = Book
// s = student
// arr of value = num. of pages in book
// find minimiz the maximum num. of pages per student vachi sake
#include<iostream>
using namespace std;
int max(int arr[],int n){
    int max=1;
    for (int i = 0; i < n; i++)
    {
        if(max < arr[i])
             max=arr[i];
    }
    return max;
}
int sum(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    sum = sum +arr[i];

    return sum;
}
bool isvalid(int arr[],int n ,int s,int max){
    int student = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum +arr[i];
        if(sum > max)
        {
            student++;
            sum = arr[i];
        }
        if(student > s)
        return false;
    }
    return true;
}

int main(){
    int arr[15],n,s;

    cout<<"Enter your arr(book) of size : ";
    cin>>n;
    cout<<"Enter your number of student : ";
    cin>>s;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Your (Book of page)Aree :";
        cin>>arr[i];
    }
    int start = max(arr,n);
    int end = sum(arr,n);
    int result = -1;

    if(n <= s)
    return -1;
    while (start<=end)
    {
        int mid = start + ((end - start)/2);
        {
            if(isvalid(arr,n,s,mid) == true)
            {
                result = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }

    cout<<"max. pages of per student read "<<result;
    return 0;
}