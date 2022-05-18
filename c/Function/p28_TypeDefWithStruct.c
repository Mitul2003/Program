#include<stdio.h>
typedef struct Student{
    char name[10];
    int age;
}stu; // when write typedef stu is alias eigther;  // stu is create a object

void main(){
    stu s1;
    printf("Enter name : ");
    scanf("%s",&s1.name);

    printf("Name is : %s",s1.name);
}