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
    printf("\n");
};

struct Node * insertAtFirst(struct Node * head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}


struct Node * insertAtIndex(struct Node * head,int data, int index){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    
    struct Node *p = head;
    int i = 0;

    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    
    return head;
}

struct Node * insertAtEnd(struct Node * head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    
    return head;
}

struct Node * insertAfter(struct Node * head,struct Node * prevNode,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    
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
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Terminate the list at the third nodes
    third->data = 10;
    third->next = NULL;

    printf("Link list before insertion\n");
    linklisttraverstion(head);
    // head = insertAtFirst(head,56);
    head = insertAtIndex(head,56,2);
    // head = insertAtEnd(head,56);
    // head = insertAfter(head,second,45);
    printf("Link list After insertion\n");
    linklisttraverstion(head);

    return 0;
}