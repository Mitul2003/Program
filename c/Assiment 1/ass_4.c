// *******************   NAME     : MITUL DUDHAT
//********************   ROLL NO. : 1261
//********************   DIV      : C
#include <stdio.h>
#include <math.h>

void Addition(int x, int y)
{
    printf("nYour Addition is %d", x + y);
}
void Multiplication(int x, int y)
{
    printf("nYour Multiplication is %d", x * y);
}
void Subtartion(int x, int y)
{
    printf("nYour Subtartion is %d", x - y);
}
void Division(int x, int y)
{
    printf("nYour Division is %d", x / y);
}
void Square(int x)
{
    printf("nYour Square is %d", x * x);
}
void Squareroot(int x)
{
    printf("nYour Squareroot is %f", sqrt(x));
}

int main()
{
    int a, b;
    char choice;
do
{
     printf("\n Enter your choice +,-,*,/,^,r=root & e=exit : ");
    scanf(" %c", &choice);



    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);

   
    
    switch (choice)
    {
    case '+':
        Addition(a, b);
        break;
    case '*':
        Multiplication(a, b);
        break;
    case '-':
        Subtartion(a, b);
        break;
    case '/':
        Division(a, b);
        break;
    case '^':
        Square(a);
        break;
    case 'r':
        Squareroot(a);
        break;

    default:
        printf("invailed");
        break;
    }
} while (choice != 'e');

    return 0;
}