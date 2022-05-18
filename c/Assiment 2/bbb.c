#include<stdio.h>
int func(int num){
    int count = 0;
    while(num!=0)
    {
        count++;
        num >>=1;

    }
    return (count);
}
int main(){
    printf("%d",func(2));
    return 0;
}