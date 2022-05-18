// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include <stdio.h>
int *ptr;
void sum(int x, int y)
{
    ptr = &x;
    *ptr += y;
}
void sub(int x, int y)
{
    ptr = &x;
    *ptr -= y;
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
void mod(int x, int y)
{
    ptr = &x;
    *ptr %= y;
}
int con(int x){
    ptr = &x;
    int temp = 0;
    while (x)
    {
        temp += x % 10;
        x /= 10;
    }
    *ptr = temp;
    
}
int main()
{
    int num1, num2;
    char choice;
    do
    {
        printf("\nEnter your num. :");
        scanf("%d %d",&num1,&num2);

        printf("\nenter your choice +,-,/,%,c=count,e=End: ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case '+':
            sum(num1, num2);
            printf("Sum of num is %d", *ptr);
            break;
        case '-':
            sub(num1, num2);
            printf("sub. of num is %d", *ptr);
            break;
        case '*':
            multifition(num1, num2);
            printf("mul. of num is %d", *ptr);
            break;
        case '/':
            div(num1, num2);
            printf("div. of num is %d", *ptr);
            break;
        case '%':
            mod(num1, num2);
            printf("modulo. of num is %d", *ptr);
            break;
        case 'c':
            con(num1);
            printf("count of num is %d", *ptr);
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
