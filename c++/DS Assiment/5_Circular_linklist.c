/* *******************   NAME     : MITUL DUDHAT
  ********************   ROLL NO. : 1261
  ********************   DIV      : C    */
 #include <stdio.h>
#include <stdlib.h>

struct node {
	int info;
	struct node* next;
};

struct node* last = NULL;
void addatlast() {
    int data;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to be inserted : \n");
    scanf("%d", &data);
    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
    else {
        temp->info = data;
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
} 
void insertAtFront() {
	int data;
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter data to be inserted: \n");
	scanf("%d", &data);
	if (last == NULL) {
		temp->info = data;
		temp->next = temp;
		last = temp;
	}
	else {
		temp->info = data;
		temp->next = last->next;
		last->next = temp;
	}
}
void insertAtIdex() {
    int data, pos, i = 0;
    struct node *temp, *n;
    printf("\nEnter the position : \n");
    scanf("%d", &pos);
    if(pos == 0) {
        insertAtFront();
        return;
    }
    temp = last->next;
    int f = 0;
    do {
        if(i == pos-1) {
            f = 1;
            n = (struct node*)malloc(sizeof(struct node));
            printf("\nEnter data to be inserted : \n");
            scanf("%d", &data);
            n->info = data;
            n->next = temp->next;
            temp->next = n;
            if (temp == last)
                last = n;
            break;
        }
        else {
            i++;
            temp = temp->next;
        }
    } while (temp != last->next);
    if(f == 0) {
        printf("out bound of list index\n");
    }
}
void display() {
	if (last == NULL)
		printf("\nList is empty\n");
	else {
		struct node* temp;
		temp = last->next;
		do {
			printf("%d->", temp->info);
			temp = temp->next;
		} while (temp != last->next);
	}
    printf("\n");
}
void creat(){
    int n;
    printf("How to many elemnt do you want to add?\n");
    scanf("%d",&n);
    while(n--) {
        addatlast();
    }
}
void deletefirst() {
    struct node* temp;
    if (last == NULL)
        printf("\nList is empty.\n");
    else {
        temp = last->next;
        last->next = temp->next;
        free(temp);
    }
}
void deletelast() {
    struct node* temp;
    if (last == NULL)
        printf("\nList is empty.\n");
 
    temp = last->next;
    while (temp->next != last)
        temp = temp->next;
    temp->next = last->next;
    last = temp;
}
void deleteAtIndex() {
    int pos, i = 1;
    struct node *temp, *position;
    temp = last->next;
    if (last == NULL)
        printf("\nList is empty.\n");
 
    else {
        printf("\nEnter index : ");
        scanf("%d", &pos);
        while (i <= pos - 1) {
            temp = temp->next;
            i++;
        }
        position = temp->next;
        temp->next = position->next;
        free(position);
    }
}
int main() {
    creat();
    while(1) {
        printf("1 - insert\n2 - Delete\n3 - Display\n4 - Exit\n");
        int t;
        scanf("%d", &t);
        if(t == 1) {
            printf("1 - insert at first\n2 - insert at last\n3 - insert at postion\n");
            scanf("%d", &t);
            (t == 1 ? insertAtFront() : (t == 2 ? addatlast() : insertAtIdex()));
        }
        else if(t == 2){
            printf("1 - delete at first\n2 - delete at last\n3 - delete at postion\n");
            scanf("%d", &t);
            (t == 1 ? deletefirst() : (t == 2 ? deletelast() : deleteAtIndex()));
        }
        else if(t == 3)  display(); else break;
    }
	return 0;
}