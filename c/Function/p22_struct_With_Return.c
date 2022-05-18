#include<stdio.h>
struct Students{
    int Roll_No;
    int Phone_no;
};
struct Students getdata(struct Students s2){
        printf("Enter roll no :");
        scanf("%d",&s2.Roll_No);
        printf("Enter Phone no :");
        scanf("%d",&s2.Phone_no);
        return s2;
};
void main(){
    struct Students s1;
    s1=getdata(s1);
    printf("Roll no is %d\n",s1.Roll_No);
    printf("Phone no is %d\n",s1.Phone_no);
}