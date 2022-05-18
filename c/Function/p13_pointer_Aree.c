#include<stdio.h>
void main(){
    int a[5]={0,1,2,3,5};
    int *ptr =&a[0];

    printf("\n Your a[0] address is %u",&a[0]);
    printf("\n Your pointer address is %u",ptr);

    printf("\n Your a[0] value is %d",a[0]);
    printf("\n Your pointer value is %d\n",*ptr);


    ++ptr;

    printf("\n Your a[0] address is %u",&a[1]);
    printf("\n Your pointer address is %u",ptr);

    printf("\n Your a[1] value is %d",a[1]);
    printf("\n Your pointer value is %d\n",*ptr);

    printf("\n Your a[0] address is %u",&a[2]);
    printf("\n Your pointer address is %u",++ptr);

    printf("\n Your a[1] value is %d",a[2]);
    printf("\n Your pointer value is %d\n",*(ptr));

    ++ptr;

    printf("\n Your a[0] address is %u",&a[3]);
    printf("\n Your pointer address is %u",ptr);

    printf("\n Your a[1] value is %d",a[3]);
    printf("\n Your pointer value is %d\n",*(ptr));

    ++ptr;

    printf("\n Your a[0] address is %u",&a[4]);
    printf("\n Your pointer address is %u",ptr);

    printf("\n Your a[1] value is %d",a[4]);
    printf("\n Your pointer value is %d\n",*(ptr));

    ++ptr;

    printf("\n Your a[0] address is %u",&a[5]);
    printf("\n Your pointer address is %u",ptr);

    printf("\n Your a[1] value is %d",a[5]);
    printf("\n Your pointer value is %d\n",*(ptr));

}