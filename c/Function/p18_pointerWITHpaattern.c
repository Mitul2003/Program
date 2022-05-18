#include<stdio.h>
#include<string.h>
void main(){
    char a[20],*ptr;
    int i=0;

    printf("Enter your String :");
    scanf("%s",a);

    printf("\nYour String is : %s ",a);
    
    while (i<=strlen(a))
    {
        printf("\n");
        ptr =a;
        for (int j = 0; j < i; j++)
        {
            printf("%c",*ptr);
            ptr++;
        }
        i++;
    }   
}