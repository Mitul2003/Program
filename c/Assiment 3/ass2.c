// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include <stdio.h>

struct time
{
    int hour;
    int minute;
    int Second;
};

struct time getdata(struct time t2);
struct time addtime(struct time t1, struct time t2);
void printdata(struct time t);
struct time chek(struct time t3);

struct time getdata(struct time t2)
{
    printf("Enter hour :");
    scanf("%d", &t2.hour);
    printf("Enter minute :");
    scanf("%d", &t2.minute);
    printf("Enter second :");
    scanf("%d", &t2.Second);
    printf("\n");

    t2 = chek(t2);
    return t2;
}

void printdata(struct time t)
{
    printf("\ntime is %.2d:%.2d:%.2d", t.hour, t.minute, t.Second);
}

struct time addtime(struct time t1, struct time t2)
{
    struct time t3;
    t3.Second = t1.Second + t2.Second;
    t3.minute = t1.minute + t2.minute;
    t3.hour = t1.hour + t2.hour;

    t3 = chek(t3);

    return t3;
}

struct time chek(struct time t3)
{
    if (t3.Second >= 60 && t3.minute >= 60)
    {
        t3.hour++;
        t3.minute -= 60;
        t3.Second -= 60;
    }
    else
    {
        if (t3.Second >= 60)
        {
            t3.minute++;
            t3.Second -= 60;
        }
        if (t3.minute >= 60)
        {
            t3.hour++;
            t3.minute -= 60;
        }
    }
    return t3;
}

int main()
{

    struct time t1, t2, t3;
    t1 = getdata(t1);
    t2 = getdata(t2);

    t3 = addtime(t1, t2);

    printdata(t1);
    printdata(t2);
    printdata(t3);
    return 0;
}