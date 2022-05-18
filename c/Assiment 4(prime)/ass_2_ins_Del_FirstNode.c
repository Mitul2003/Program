#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int num;
    struct Node *next;
} * head;

void createNodeList(int n)
{
    struct Node *newNode, *temp;
    int num;
    head = (struct Node *)malloc(sizeof(struct Node));

    if (head == NULL) //check whether the fnnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);

        head->num = num;
        head->next = NULL;

        temp = head;

        for (int i = 2; i <= n; i++)
        {
            newNode = (struct Node *)malloc(sizeof(struct Node));
            if (newNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                newNode->num = num;
                newNode->next = NULL;

                temp->next = newNode;
                temp = temp->next;
            }
        }
    }
};

void displayList()
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        while (temp != NULL)
        {
            printf(" Data = %d\n", temp->num);
            temp = temp->next;
        }
    }
}

void insartDataFirestNode()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    int num;

    printf(" Input data for new node : ");
    scanf("%d", &num);

    if (head == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        newNode->num = num;
        newNode->next = head;

        head = newNode;
    }
}

void DeleteFirstNode()
{
    struct Node *ptr = head;
    head = head->next;

    printf("\n Delete data %d addrese of %d \n", ptr->num, ptr->next);
    free(ptr);
}

void main()
{
    int n,choice;

    printf(" Input the number of nodes : ");
    scanf("%d", &n);

    createNodeList(n);

    printf("\n Data entered in the list : \n");

    displayList();
    insartDataFirestNode();

    printf("\n Insert The Data after Disply list \n");
    displayList();

    printf("Delete the Data prees 1 : ");
    scanf("%d",&choice);

    if (choice == 1)
    {
        DeleteFirstNode();
        printf("\n delet The Data after Disply list \n");
        displayList();
    }
}