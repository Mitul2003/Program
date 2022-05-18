// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include<stdio.h>
#include<stdlib.h>
struct Student{
    int roll_no;
    char name[10];
    float percentage;
};

void setData(struct Student *S){
    printf("Enter the Roll no of student : ");
    scanf("%d",&S->roll_no);
    printf("Enter the name of student : ");
    scanf("%s",&S->name);
    printf("Enter the percentage of student : ");
    scanf("%f",&S->percentage);
    printf("\n");
}

void printData(struct Student *t){
    printf("\n %5d  %8s %10.2f",t->roll_no,t->name,t->percentage);
}

void main(){
    struct Student *ptr;
    int n;
    printf("Enter the size of struct : ");
    scanf("%d",&n);

    ptr = (struct Student*)malloc(n*sizeof(struct Student));

    for (int i = 0; i < n; i++)
    {
        setData(&ptr[i]);
    }

    printf("\nRoll No.     Name     Percentage");

    for (int i = 0; i < n; i++)
    {
        printData(&ptr[i]);
    }

    free(ptr);
}