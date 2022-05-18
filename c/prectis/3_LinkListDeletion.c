#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linklisttraverstion(struct Node* ptr){
    while (ptr!=NULL)
    {
    printf("element : %d\n",ptr->data);
    ptr = ptr->next;
    }
};

struct Node *deleteFirst(struct Node *head){
    struct Node *ptr = head;
     head = head->next;
     free(ptr);
     return head;
}

struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
}

struct Node * deleteLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    
    p->next = NULL;
    free(q);
    return head;
}

struct Node * deleteAtValue(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}



int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    // Allocate Memory for nodes in  the linked list in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second =  (struct Node *) malloc(sizeof(struct Node));
    third =  (struct Node *) malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 8;
    second->next = third;

    // Terminate the list at the third nodes
    third->data = 10;
    third->next = NULL;
    printf("Link list before insertion\n");
    linklisttraverstion(head);

    // head = deleteFirst(head);
    // head = deleteAtIndex(head,1);
    // head = deleteLast(head);
    head = deleteAtValue(head,8);

    printf("Link list After insertion\n");
    linklisttraverstion(head);
    return 0;
}