#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *pre;
    struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;
struct node *temp = NULL;
struct node *current = NULL;

void insertfirst()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d", &temp->data);
    temp->next = head;
    temp->pre = NULL;
    head = temp;
    printf("Node %d inserted successfully", temp->data);
}

void insertlast()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data:");
    scanf("%d", &temp->data);
    current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
    temp->pre = current;
    temp->next = NULL;
    printf("Node %d inserted successfully ", temp->data);
}

void deletefirst()
{
    temp = head;
    head = head->next;
    head->pre = NULL;
    free(temp);
    printf("Node Deleted Successfully");
}

void deletelast()
{
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->pre->next = NULL;
    printf("Node deleted successfully");
}

void create(int data)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));

    link->data = data;
    link->pre = NULL;
    link->next = NULL;

    if (head == NULL)
    {
        head = link;
        current = head;
        return;
    }
    else
    {
        current->next = link;
        link->pre = current;
        current = link;
        last = link;
    }
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty ");
    }
    else
    {
        while (ptr->next != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("%d ", ptr->data);
    }
}

int main()
{
    int fb, num, data, i;
    while (fb != 7)
    {
        printf("\n\t1.Create \n\t2.Insert at first \n\t3.Insert at last \n\t4.Delete at first \n\t5.Delete at last \n\t6.Display \n\t7.Exit\n\t");
        scanf("%d", &fb);
        switch (fb)
        {
        case 1:
            printf("Enter the number of nodes ");
            scanf("%d", &num);
            for (i = 0; i < num; i++)
            {
                printf("Enter data ");
                scanf("%d", &data);
                create(data);
            }
            break;

        case 2:
            insertfirst();
            break;

        case 3:
            insertlast();
            break;

        case 4:
            deletefirst();
            break;

        case 5:
            deletelast();
            break;

        case 6:
            display();
            break;

        case 7:
            exit(0);
            break;

        default:
            printf("INVALID");
            break;
        }
    }
    return 0;
}