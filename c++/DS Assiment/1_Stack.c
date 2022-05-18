/* *******************   NAME     : MITUL DUDHAT
  ********************   ROLL NO. : 1261
  ********************   DIV      : C    */
#include<stdio.h>
int top = 0, size, ar[100], ele, ch, cnt = 0;
void pop();
void push();
void display();
void top1();
void occurance();
void totoal_elment_in_stack();
void search();
void mn();
int main() {
    printf("Enetr the size of stack : \n");
    scanf("%d", &size);
    ar[size];
    while(1) {
        printf("\n0 - top\n");
        printf("1 - push\n");
        printf("2 - pop\n");
        printf("3 - display\n");
        printf("4 - occurance\n");
        printf("5 - totol elemnt in stack\n");
        printf("6 - search\n");
        printf("7 - min\n");
        printf("8 - exit\n");
        scanf("%d",&ch);
        if(ch == 0) {
            top1();
        }
        else if(ch == 1) {
            push();
        }
        else if(ch == 2) {
            pop();
        }
        else if(ch == 3) {
            display();
        }
        else if(ch == 4) {
            occurance();
        }
        else if(ch == 5) {
            peep();
        }
        else if(ch == 6) {
            search();
        }
        else if(ch == 7) {
            mn();
        }
        else {
            break;
        }
    }
    
    return 0;
}
void mn(){
    if(top == 0) {
        printf("Stack underflow\n");
        return;
    }
    ele = ar[1];
    for(int i = 2; i <= top; i++) {
        if(ele > ar[i]) {
            ele = ar[i];
        }
    }
    printf("mimum element is %d\n",ele);
}
void top1(){
    if(top == 0) {
        printf("Stack underflow\n");
        return;
    }
    printf("top elemnt %d\n",ar[top]);
}
void pop() {
    if(top == 0) {
        printf("Stack underflow\n");
        return;
    }
    ar[top] = 0;
    top--;
    printf("Element poped\n");
}
void push() {
    if(top >= size) {
        printf("Stack overflow\n");
        return;
    }
    printf("Enter the elemnt that you want to add : \n");
    scanf("%d",&ele);
    top++;
    ar[top] = ele;
    printf("Element pushed\n");
    
}
void display() {
    if(top == 0) {
        printf("Stack underflow\n");
        return;
    }
    for(int i = 1; i <= top; i++) {
        printf("%d ",ar[i]);
    }
    printf("\n");
}
void occurance() {
    cnt = 0;
    printf("Enter the elemnt that you want find : \n");
    scanf("%d",&ele);
    for(int i = 1; i <= top; i++) {
        if(ele == ar[i]) cnt++;
    }
    printf("element %d occured %d times\n",ele,cnt);
}
void totoal_elment_in_stack() {
    printf("Totol element in stack : %d\n",top);
}
void search() {
    printf("Enter the elemnt that you want find : \n");
    scanf("%d",&ele);
    for(int i = 1; i <= top; i++) {
        if(ele == ar[i]) {
            printf("Element found at %dth location\n",i);
            return;
        }
    }
    printf("Element not found\n");
}