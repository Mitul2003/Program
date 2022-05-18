#include<stdio.h>
int addition(int,int);
int sub();
int mul();
int div();


int main(){
    int result;
    int (*p)(int,int) =&addition;
    int (*q)() =&sub;
    int (*r)() =&mul;
    int (*s)() =&div;
    
    result=(*p)(5,4);
    printf("addition %d\n",result);

    result=(*q)();
    printf("sub. %d\n",result);

    result=(*r)();
    printf("mul. %d\n",result);

    result=(*s)();
    printf("div. %d\n",result);

    return 0;
}
int addition(int a,int b){
    return a+b;
}
int sub(){
    int a,b;
    printf("Enter your a & b : ");
    scanf("%d %d",&a,&b);
    return a-b;
}

int mul(){
    int a,b;
    printf("Enter your a & b : ");
    scanf("%d %d",&a,&b);
    return a*b;
}

int div(){
    int a,b;
    printf("Enter your a & b : ");
    scanf("%d %d",&a,&b);
    return a/b;
}