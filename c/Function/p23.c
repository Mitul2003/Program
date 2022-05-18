#include<stdio.h>
struct Product{
    int Product_Id;
    char Product_Name[10];
    int Morning_Selling;
    int noon_Selling;
    int Evening_Selling[3];
};
struct Product setdata(struct Product s){
    printf("Enter your Product_Id,Product_Name,Morning_Selling,noon_Selling,Evening_Selling ");
    scanf("%d %s %d %d %d %d %d",&s.Product_Id,&s.Product_Name,&s.Morning_Selling,&s.noon_Selling,&s.Evening_Selling[0],&s.Evening_Selling[1],&s.Evening_Selling[2]);
    return s;
}
void getdata(struct Product s){
    printf("Your product_Id is %d\n",s.Product_Id);
    printf("Your product_Name is %s\n",s.Product_Name);
    printf("Your Morning_selling is %d\n",s.Morning_Selling);
    printf("Your noon_selling is %d\n",s.noon_Selling);
    printf("Your Evening_selling is %d\n",s.Evening_Selling[0]+s.Evening_Selling[1]+s.Evening_Selling[2]);
}
void main(){
    struct Product s1;
    s1 = setdata(s1);
    getdata(s1);