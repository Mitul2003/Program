// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include <stdio.h>

struct Date
{
    int day, month, year;
};

struct Date getdata(struct Date d2)
{
    printf("\nEnter day :");
    scanf("%d", &d2.day);
    printf("Enter month :");
    scanf("%d", &d2.month);
    printf("Enter year :");
    scanf("%d", &d2.year);
    printf("\n");

    return d2;
}
struct Date printdata(struct Date d3)
{
    char exit = 'C';
    struct Date d4;

    for (; exit != 'E';)
    {
        switch (d3.month)
        {
            printf("Formet A ->\n");
        case 1:
            if (d3.day > 31)
            {
                d3.month++;
                d3.day -= 31;
                continue;
            }
            printf("Formet A -> January %d %d", d3.day, d3.year);
            break;
        case 2:
            if (d3.day > 28)
            {
                if (d3.day == 29)
                {
                    printf("This is leap year -> February %d %d", d3.day, d3.year);
                    break;
                }
                else
                {
                    d3.month++;
                    d3.day -= 28;
                    continue;
                }
            }

            printf("Formet A -> February %d %d", d3.day, d3.year);
            break;
        case 3:
            if (d3.day > 31)
            {
                d3.month++;
                d3.day -= 31;
                continue;
            }
            printf("Formet A -> March %d %d", d3.day, d3.year);
            break;
        case 4:
            if (d3.day > 30)
            {
                d3.month++;
                d3.day -= 30;
                continue;
            }
            printf("Formet A -> April %d %d", d3.day, d3.year);
            break;
        case 5:
            if (d3.day > 31)
            {
                d3.month++;
                d3.day -= 31;
                continue;
            }
            printf("Formet A -> May %d %d", d3.day, d3.year);
            break;
        case 6:
            if (d3.day > 30)
            {
                d3.month++;
                d3.day -= 30;
                continue;
            }
            printf("Formet A -> June %d %d", d3.day, d3.year);
            break;
        case 7:
            if (d3.day > 31)
            {
                d3.month++;
                d3.day -= 31;
                continue;
            }
            printf("Formet A -> July %d %d", d3.day, d3.year);
            break;
        case 8:
            if (d3.day > 31)
            {
                d3.month++;
                d3.day -= 31;
                continue;
            }
            printf("Formet A -> August %d %d", d3.day, d3.year);
            break;
        case 9:
            if (d3.day > 30)
            {
                d3.month++;
                d3.day -= 30;
                continue;
            }
            printf("Formet A -> septembar %d %d", d3.day, d3.year);
            break;
        case 10:
            if (d3.day > 31)
            {
                d3.month++;
                d3.day -= 31;
                continue;
            }
            printf("Formet A -> october %d %d", d3.day, d3.year);
            break;
        case 11:
            if (d3.day > 30)
            {
                d3.month++;
                d3.day -= 30;
                continue;
            }
            printf("Formet A -> November %d %d", d3.day, d3.year);
            break;
        case 12:
            if (d3.day > 31)
            {
                d3.year++;
                d3.month = 1;
                d3.day -= 31;
                continue;
            }
            printf("Formet A -> December %d %d", d3.day, d3.year);
            break;

        default:
            printf("program not find month");
            break;
        }
        printf("\nFormet B (YYYY/MM/DD)-> %d/%d/%d", d3.year, d3.month, d3.day);
        printf("\nExit for loop press 'E' & con.'C' : ");
        scanf(" %c", &exit);
        if (exit == 'C')
        {
            d3 = getdata(d4);
        }
    }
}

int main()
{
    struct Date d1;
    d1 = getdata(d1);
    printdata(d1);
    return 0;
}