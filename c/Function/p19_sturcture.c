#include<stdio.h>
#include<string.h>
struct students{
    char First_name[20];
    char Last_name[20];
    char Subject[20];
    int Roll_no;
};
void main(){
    struct students s1,s2;
    strcpy(s1.First_name,"Mitul");
    strcpy(s1.Last_name,"Dudhat");
    strcpy(s1.Subject,"Fop");
    s1.Roll_no=1261;

    strcpy(s2.First_name,"Vaibhav");
    strcpy(s2.Last_name,"Vadadoriya");
    strcpy(s2.Subject,"DBMS");
    s2.Roll_no=1251;

    printf("****List of First Student****\n");

    printf("First Name : %s\n",s1.First_name);
    printf("Last Name  : %s\n",s1.Last_name);
    printf("Subject    : %s\n",s1.Subject);
    printf("Roll no.   : %d\n",s1.Roll_no);

    printf("****List of First Student****\n");

    printf("First Name : %s\n",s2.First_name);
    printf("Last Name  : %s\n",s2.Last_name);
    printf("Subject    : %s\n",s2.Subject);
    printf("Roll no.   : %d\n",s2.Roll_no);
}