#include<stdio.h>
struct person{
    char name[10];
    int roll_num;
};

int main()
{
    struct person *personPtr,Person1;
    personPtr = &Person1;

    printf("Enter name : ");
    scanf("%s",&personPtr->name);

    printf("Enter Roll num : ");
    scanf("%d",&personPtr->roll_num);

    printf("\nYour roll num is %d",personPtr->roll_num);
    printf("\nYour Name is %s",personPtr->name);

    return 0;
}
