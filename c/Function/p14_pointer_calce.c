#include <stdio.h>
int *ptr;
void sum(int x, int y)
{
    ptr = &x;
    *ptr += y;
}
void multifition(int x, int y)
{
    ptr = &x;
    *ptr *= y;
}
void div(int x, int y)
{
    ptr = &x;
    *ptr /= y;
}

int main()
{
    int num1, num2;
    char choice;
    do
    {
        printf("Enter your num. :");
        scanf("%d %d",&num1,&num2);

        printf("enter your choice +,-,/,e=End: ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case '+':
            sum(num1, num2);
            printf("Sum of num is %d", *ptr);
            break;
        case '*':
            multifition(num1, num2);
            printf("mul. of num is %d", *ptr);
            break;
        case '/':
            div(num1, num2);
            printf("div. of num is %d", *ptr);
            break;

        case 'e':
            break;

        default:
            printf("invailed");
            break;
        }
    } while (choice != 'e');

    return 0;
}
