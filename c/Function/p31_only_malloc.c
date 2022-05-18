#include<stdio.h>    // (heap)
#include<stdlib.h>  
void main(){
        //Use of Malloc
       //Garbez value thi insyilize  thy

    int *ptr;
    int n,sum=0;
    printf("ENter the size of arre : ");
    scanf("%d",&n);

    ptr = (int*) malloc(n*sizeof(int));
        if(ptr == NULL)
        {
            printf("Memory is not allocet");
            exit(0);
        }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d aree ",i);
        scanf("%d",&ptr[i]);
         sum=sum+ptr[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nThe value of %d aree %d",i,ptr[i]);
        // printf("\n %d",*(ptr + i));
        printf(",address is %d",ptr + i);
    }
    printf("\nSum of num. aree is %d",sum);
    free(ptr);
}

