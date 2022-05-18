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
struct time getdata(struct time t2)
{
    t2.hour = 11;
    t2.minute = 20;
    t2.Second = 55;

    return t2;
}

int main()
{
    int *ptr;
    int n;
    
    struct time t1;
    t1 = getdata(t1);

    printf("time is %d:%d:%d", t1.hour, t1.minute, t1.Second);

    return 0;
}