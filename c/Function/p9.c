#include<stdio.h>
void getdata();
int sub[5];
void result();

int main(){
    result();
    return 0;
}

void result(){
    getdata();
    int sum =0;
    float ave;
    for (int i = 0; i < 5; i++)
    {
        sum=sub[i];
    }
    ave=(float)sum/5;
    printf("The sum of all sub. is %d \n the ave. of all sub. is %.2f",sum,ave);
}
void getdata(){
    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark of sub %d : ",i+1);
        scanf("%d",&sub[i]);
    }
    
}