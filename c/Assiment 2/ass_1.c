// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int roll_no;
    float per;
    char grade;

    int *ptr1=&roll_no;
    float *ptr2=&per;
    char *ptr3=&grade;

    printf("Enter your roll no,per. and grade :");
    scanf("%d %f %c",&roll_no,&per,&grade);

    printf("\n your roll no is : %d",*ptr1);
    printf("\n your percentage  is : %f",*ptr2);
    printf("\n your grade  is : %c",*ptr3);


    return 0;
}
