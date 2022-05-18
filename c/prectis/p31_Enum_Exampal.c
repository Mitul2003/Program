#include<stdio.h>
enum boolen{   
    false,true
};
enum boolen isEven(int);

void main(){
    int n;
    enum boolen ans;
    printf("Enter the number :");
    scanf("%d",&n);

    ans = isEven(n);
    if (ans == true){
        printf("Num. is Even ");
    }
    else{
        printf("Num. is odd.");
    }
}

enum boolen isEven(int x){
    if(x%2 == 0)
    return (true)/*1*/;
    else
    return (false)/*0*/;
}