#include<stdio.h>
int mul(int a){
    
    if (a>0)
    {
        //r=a%10;
        //a=a/10;
        return (a%10 * mul(a/10));
    }
    else
        return 1;

}

int main(){
    int num,ans;
    printf("Enter your num : ");
    scanf("%d", &num);
    ans=mul(num);
    printf("multification is %d ", ans);
    return 0;
}