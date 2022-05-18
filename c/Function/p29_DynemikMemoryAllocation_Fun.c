#include<stdio.h>    // (heap)
#include<stdlib.h>  
void main(){
//     //Use of Malloc
       // Garbez value thi insyilize  thy

//     int *ptr;
//     int n;
//     printf("ENter the size of arre : ");
//     scanf("%d",&n);

//     ptr = (int*) malloc(n*sizeof(int));
        // if(ptr == NULL)
        // {
        //     printf("Memory is not allocet");
        //     exit(0);
        // }
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value of %d aree ",i);
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nThe value of %d aree %d",i,ptr[i]);
//     }
// }


//     //Use of calloc
       // Zero thi insyilize thy

    int *ptr;
    int n;
    printf("ENter the size of arre : ");
    scanf("%d",&n);

    ptr = (int*) calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d aree ",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nThe value of %d aree %d",i,ptr[i]);
    }


 //Use of realloc

    printf("\nENter the size of new  arre : ");
    scanf("%d",&n);

    ptr = (int*) realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d aree ",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nThe value of %d aree %d",i,ptr[i]);
    }

    // use of free
    free(ptr);
}