#include <stdio.h>

int sum(int a)
{
    int add = 0, temp;
    int n = a;
    for (int i = 0; n != '\0';)
    {
       // temp = n % 10;
        add += n % 10;
        n /= 10;
    }
    return add;
}
int main()
{
    int a, ans;
    printf("Enter your  number : ");
    scanf("%d", &a);

    ans = sum(a);
    printf("%d", ans);

    return 0;
}