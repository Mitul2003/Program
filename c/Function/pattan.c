#include<stdio.h>

// void main(){
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
// }

void main(){
    for (int i = 10; i > 0; i++)
    {
        for (int j = 10; j > i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}