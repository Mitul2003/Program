#include<iostream>
using namespace std;
int set_bit(int n, int poss){
    return ((n & (1 << poss)) != 0);
}
void subsets(char arr[],int n)
{
    for (int i = 0; i < (1<<n) /*2 the power of n */; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(i & (1<<j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }  
}
int uniqueone(int arr[],int n)
{
    int xorsum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        xorsum ^= arr[i];
        cout << xorsum << endl;
    }
    
    return xorsum;
}

void uniquetwo(int arr[],int n)
{
    int xorsum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        xorsum ^= arr[i]; 
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while(setbit != 1)
    {
        setbit ^= xorsum & 1;
        pos++;
        xorsum = xorsum << 1;
    }
    int newxor = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(set_bit(arr[i],pos-1))
        newxor ^= arr[i];
    }
    cout << newxor << endl;
    cout << (tempxor^newxor) << endl;
}

int main()
{
    char arr[4] ={'a','b','c'};
    subsets(arr,3);
    // cout << (1 << 3) << endl;

    // int arr[8] = {3,4,5,6,5,4,3};
    // cout << uniqueone(arr,7) << endl;

    // int arr[8] = {3,4,5,6,5,4,3,9};
    // uniquetwo(arr,8);
    
    return 0;
}