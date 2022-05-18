/* *******************   NAME     : MITUL DUDHAT
  ********************   ROLL NO. : 1261
  ********************   DIV      : C    */
#include<stdio.h>
#include<conio.h>

int ar[200];
int size, front = -1, rear = -1, ch, ele;

void enqueu();
void denqueu();
void display();


void main() {
    clrscr();
    printf("Enter the size of array : \n");
    scanf("%d",&size);
    ar[size];
    
    while(1) {
        printf("\n1 - enqueue\n");
        printf("2 - dequeue\n");
        printf("3 - display\n");
        printf("4 - exit\n");
        scanf("%d",&ch);
        if (ch == 4) {
            break;
        }
        else if(ch == 1) {
            enqueu();
        }
        else if(ch == 2) {
            denqueu();
        }
        else {
            display();
        }
    }
    getch();
}

void enqueu(){
    if((rear+1) % size == front) {
        printf("Queue overflow\n");
        return;
    }
    printf("Enter the element that you want to add : \n");
    scanf("%d", &ele);
    if(rear == -1 && front == -1) {
        rear = front = 0;
    }
    else {
        rear = (rear + 1) % size;
    }
    ar[rear] = ele;
    printf("Elemet inserted\n");
}

void denqueu(){
    if(front == -1 && rear == -1) {
        printf("Queue underflow\n");
        return;
    }
    ar[front] = 0;
    printf("Element deleted\n");
    if(front == rear) {
        front = rear = -1;
    }
    else {
        front = (front + 1) % size;
    }
}

void display(){
    for(int i = 0; i < size; i++) {
        if(ar[i] != 0) {
            printf("%d ", ar[i]);
        }
    }
    printf("\n");
}