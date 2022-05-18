#include<stdio.h>

enum day{sunday,monday,tuesday=10,wednesday,thursday,friday,saturday};

void main(){
    // for (int i = sunday; i <= saturday; i++)
    // {
    //     printf("\n%d",i);
    // }

    
    printf("\n%d\n%d\n%d\n%d\n%d\n%d\n%d",sunday,monday,tuesday,wednesday,thursday,friday,saturday);
}