// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include<stdio.h>
struct product setdata(struct product p1);
struct product calculate(struct product p1);
void printData(struct product p1);

struct product{
        int product_id;
        char User_Name[30];
        char product_Name[30];
        int Quantity;
        int price;
        int Total_cost;
};

struct product setdata(struct product p1){
    printf("Enter the id of product : ");
    scanf("%d",&p1.product_id);
    printf("Enter the Name of user : ");
    scanf("%s",&p1.User_Name);
    printf("Enter the Name of product : ");
    scanf("%s",&p1.product_Name);
    printf("Enter the Quantity of product : ");
    scanf("%d",&p1.Quantity);
    printf("Enter the Price of product : ");
    scanf("%d",&p1.price);
    printf("\n");
    p1=calculate(p1);
    return p1;
}

struct product calculate(struct product p1){
    p1.Total_cost = p1.Quantity * p1.price;
    return p1;
}

void printData(struct product p1){
    printf("\n| %10d        |    %15s   |  %9d         |  %6d       |       %6d       |",p1.product_id,p1.product_Name,p1.Quantity,p1.price,p1.Total_cost);
}
int main(){
    struct product p1[3];

    p1[0]=setdata(p1[0]);
    p1[1]=setdata(p1[1]);
    p1[2]=setdata(p1[2]);


    printf("\n_____________________________________________________________________________________________________ ");
    printf("\n|     product_id    |     product_Name     |      Quantity      |     price     |     Total_cost     |"); 
    printf("\n|___________________|______________________|____________________|_______________|____________________|");
    printData(p1[0]);
    printData(p1[1]);
    printData(p1[2]);
    return 0;
}