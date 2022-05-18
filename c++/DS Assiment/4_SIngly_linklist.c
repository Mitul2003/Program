/* *******************   NAME     : MITUL DUDHAT
  ********************   ROLL NO. : 1261
  ********************   DIV      : C    */
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL, *temp, *new_node;

struct Node *insertAtFirst(struct Node *head)
{
    int data;
    printf("\nEnter Vlue of elements:");
    scanf("%d", &data);
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}
struct Node *insertAtIndex(struct Node *head)
{
    int data;
    printf("\nEnter Vlue of elements:");
    scanf("%d", &data);
    int index;
    printf("\nEnter index of elements:");
    scanf("%d", &index);
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;

    return head;
}
struct Node *insertAtlast(struct Node *head)
{
    int data;
    printf("\nEnter Vlue of elements:");
    scanf("%d", &data);
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node *deleteAtIndex(struct Node *head)
{
    int index;
    printf("\nEnter index of elements:");
    scanf("%d", &index);
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct Node *deleteLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}
void create(int data)
{
    new_node = (struct node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
        temp = head;
    }
    else
    {
        temp->next = new_node;
        temp = temp->next;
    }
}
void display()
{
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int n, no;
    printf("Enter the number of nodes ");
    scanf("%d", &no);
    for (int i = 0; i < no; i++)
    {
        printf("Enter data ");
        scanf("%d", &n);
        create(n);
    }
    while (1)
    {
        printf("1 - insert\n2 - Delete\n3 - Display\n4 - Exit\n");
        int t;
        scanf("%d", &t);
        if (t == 1)
        {
            printf("1 - insert at first\n2 - insert at last\n3 - insert at postion\n");
            scanf("%d", &t);
            (t == 1 ? head = insertAtFirst(head) : (t == 2 ? insertAtlast(head) : insertAtIndex(head)));
        }
        else if (t == 2)
        {
            printf("1 - delete at first\n2 - delete at last\n3 - delete at postion\n");
            scanf("%d", &t);
            (t == 1 ? head = deleteFirst(head) : (t == 2 ? deleteLast(head) : deleteAtIndex(head)));
        }
        else if (t == 3)
            display();
        else
            break;
    }

    return 0;
}