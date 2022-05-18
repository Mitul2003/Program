// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include<stdio.h>
struct product setdata(struct product p1);
struct product calculate(struct product p1);
void printData(struct product p1);

struct product{
        int product_id;
        char product_Name[30];
        int producation[3];
        int Total;
};

struct product setdata(struct product p1){

    printf("Enter the id of product : ");
    scanf("%d",&p1.product_id);
    printf("Enter the Name of product : ");
    scanf("%s",&p1.product_Name);
    printf("Enter the producation of Morning product : ");
    scanf("%d",&p1.producation[0]);
    printf("Enter the producation of non product : ");
    scanf("%d",&p1.producation[1]);
    printf("Enter the producation of Evening product : ");
    scanf("%d",&p1.producation[2]);
   
    printf("\n");
    p1=calculate(p1);
    return p1;
}

struct product calculate(struct product p1){
    p1.Total = p1.producation[0] + p1.producation[1] + p1.producation[2];
    return p1;
}

void printData(struct product p1){
    printf("\n| %10d      |  %15d      |   %5d    | %5d   | %5d   | %5d        |",p1.product_id,p1.product_Name,p1.producation[0],p1.producation[1],p1.producation[2],p1.Total);
}
int main(){
    struct product p1[3];

    p1[0]=setdata(p1[0]);
    p1[1]=setdata(p1[1]);
    

    printf("\n__________________________________________________________________________________________");
    printf("\n|    product_id   |      product_Name     |   Morning  |   Noon  |Evening  | Total_cost   | "); 
    printf("\n|_________________|_______________________|____________|_________|_________|______________| ");
   
    printData(p1[0]);
    printData(p1[1]);
    
    return 0;
}