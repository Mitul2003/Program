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

void InsertNodeAtMiddle(int Position)
{
    int i, data;
    struct Node *newNod, *temp;
    newNod = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter Data for New Node : ");
    scanf("%d", &data);
    newNod->num = data;

    if (newNod == NULL)
    {
        printf("Memory Allocete Error!");
    }
    else
    {
        temp = head;
        for (int i = 2; i <= Position - 1; i++)
        {
            temp = temp->next;
        }

        newNod->next = temp->next;
        temp->next = newNod;
    }
}

void DeletNodeAtMiddle(int position)
{
    int i;
    struct Node *toDelete, *prevNode;
    if (head == NULL)
    {
        printf("Memory Allocete Error!");
    }
    else
    {
        toDelete = head;
        prevNode = head;

        for (int i = 2; i <= position; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->next;

            if (toDelete == NULL)
                break;
        }
        if (toDelete != NULL)
        {
            if (toDelete == head)
                head = head->next;

            prevNode->next = toDelete->next;
            toDelete->next = NULL;

            free(toDelete);
            printf("Successfully Deleted From The Middle Node ");
        }
        else
        {
            printf("Invalid Possition !");
        }
    }
}
void main()
{
    int n;
    int Position;

    printf(" Input the number of nodes : ");
    scanf("%d", &n);

    createNodeList(n);
    displayList();

    printf("Enter Possition of Node : ");
    scanf("%d", &Position);

    InsertNodeAtMiddle(Position);
    printf("\n Data entered in the list : \n");
    displayList();

    printf("Enter Possition of Node you want to Delet : ");
    scanf("%d", &Position);

    DeletNodeAtMiddle(Position);
    printf("\n Data Deleted in the Position \n");
    displayList();
}