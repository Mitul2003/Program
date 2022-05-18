// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include <stdio.h>
#include <string.h>

void main()
{
    char word[20];
    printf("Enter your word : ");
    scanf("%s", &word);

    puts("first program\n");
    for (int i = 0; i <= strlen(word); i++)
    {
        char *ptr = word;
        ptr = (ptr + i);
        for (; *ptr != '\0';)
        {
            printf("%c", (*ptr));
            ptr++;
        }
        printf("\n");
    }

    puts("Second program\n");
    for (int i = 0; i <= strlen(word); i++)
    {
        char *ptr = word;
        for (int j = 0; j <= strlen(word) - i; j++)
        {
            printf("%c", (*ptr));
            ptr++;
        }
        printf("\n");
    }
}