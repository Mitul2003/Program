#include<stdio.h>
#include<string.h>

struct student{
    char name[10];
    int roll_no;
};

void getdata(struct student *student);   // struct with fun.pointer
void main(){
    struct student student1,student2;
    strcpy(student1.name,"Mitul");
    student1.roll_no=1261;

    getdata(&student1);
}
void getdata(struct student *student){
    printf("Name : %s\n",student->name);
    printf("Roll num : %d",student->roll_no);
}