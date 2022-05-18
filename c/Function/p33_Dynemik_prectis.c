#include<stdio.h>
#include<stdlib.h>
int *ptr,n,sum = 0;
int add(){
    printf("Enter the num of aree :");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the valu of aree %d : ",i);
        scanf("%d",ptr + i);
        sum+=*(ptr+i);
    }
    return sum;
}

void main(){
    int sum;
    sum = add();
    printf("Sum of num : %d",sum);
}