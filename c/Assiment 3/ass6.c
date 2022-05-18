// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include<stdio.h>

struct state getdata(struct state s1);
void Display(struct state s1);

struct state{
    char name[20];
    char Capital[30];
};

struct state getdata(struct state s1){
    printf("Enter the Name of State : ");
    scanf("%s",&s1.name);
    printf("Enter the Name of Capital : ");
    scanf("%s",&s1.Capital);

    printf("\n");
    return s1;
}

void Display(struct state s1){
    printf("\n%13s     %15s ",s1.name,s1.Capital);
}

void main(){
    struct state s1[2];

    s1[0] = getdata(s1[0]);
    s1[1] = getdata(s1[1]);
    printf("\n_______________________________________");
    printf("\n       State            Capitals      ");
    printf("\n_______________________________________");
    Display(s1[0]);
    Display(s1[1]);

}