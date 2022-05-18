#include<stdio.h>
#include<string.h>
struct Empoly{
    char name[20];
    char Salary[20];
    char Designation[20];
    int EMp_Id;
};

void getdata(struct Empoly *E){
    printf("\nEmp. name : %s\n",E->name);
    printf("Emp. Salary : %s\n",E->Salary);
    printf("Emp. Designation : %s\n",E->Designation);
    printf("Emp. EMp_Id : %d\n",E->EMp_Id);
}
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

    getdata(&E1);
    getdata(&E2);
}