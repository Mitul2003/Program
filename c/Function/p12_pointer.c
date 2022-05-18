#include<stdio.h>
int main(){
    float a=43.20;
    //double b=5496;
    printf("\n Your number of float is %f",a);
    //printf("\n Your number of double ",b);
    float *ptr = &a;
    printf("\n your ver. address is %u",a);
    printf("\n your pointer adderess %p",ptr);
    printf("\n your pointer adderess %p",++ptr);
    printf("\n your pointer  %f",*ptr);
    printf("\n your pointer  %f",++*ptr);
    printf("\n your pointer  %f",*ptr++);
    printf("\n your pointer  %f",*ptr);



    return 0;
}