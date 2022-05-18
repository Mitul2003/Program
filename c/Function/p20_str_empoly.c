#include<stdio.h>
#include<string.h>
struct Empoly{
    char name[20];
    char Salary[20];
    char Designation[20];
    int EMp_Id;
};
void main(){
    struct Empoly E1,E2;
    strcpy(E1.name,"Mitul Dudhat");
    strcpy(E1.Salary,"20000");
    strcpy(E1.Designation,"Manejar");
    E1.EMp_Id=1;

    strcpy(E2.name,"Vaibhav Vadadoriya");
    strcpy(E2.Salary,"10000");
    strcpy(E2.Designation,"DBMS");
    E2.EMp_Id=2;

    printf("****List of First Student****\n");

    printf("First Name : %s\n",E1.name);
    printf("Last Name  : %s\n",E1.Salary);
    printf("Subject    : %s\n",E1.Designation);
    printf("Roll no.   : %d\n",E1.EMp_Id);

    printf("****List of First Student****\n");

    printf("First Name : %s\n",E2.name);
    printf("Last Name  : %s\n",E2.Salary);
    printf("Subject    : %s\n",E2.Designation);
    printf("Roll no.   : %d\n",E2.EMp_Id);
}