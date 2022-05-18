/* *******************   NAME     : MITUL DUDHAT
  ********************   ROLL NO. : 1261
  ********************   DIV      : C    */
#include<stdio.h>
#include<conio.h>
int f = 0, r = 0;
int queue[200], size;
void insert()
{
	if (r == size)
		printf("The queue is overflow !!!");
	else
	{
		if (f == 0)
			f = 1;
		int x;
		printf("Enter the element \n: ");
		scanf("%d", &x);
		r++;
		queue[r] = x;
	}
}
void delet()
{
	if (f == 0)
		printf("Queue is underflow!!!");
	else
	{
		printf("Your deleted element is : %d \n", queue[f]);

		if (f == r)
			f = r = 0;
		else
			f = f + 1;
		
		
	}
}
void display()
{
	if (r == 0)
		printf("Queue is underflow !!!");
	else
	{
		int i;
		for (i = f; i <= r; i++)
			printf("The element is : %d\n", queue[i]);
	}
}

void main()
{
	int ch;
	printf("Enter the size of queue :\n ");
	scanf("%d",&size);
	queue[size];
	while (1)
	{

		printf("\n1.Insert \n2.Delete \n3.Display\n4.exit\n");
		scanf("%d",&ch);
		if (ch == 4)
			break;
		else
		{
			switch (ch)
			{
			case 1:
				insert();
				break;

			case 2:
				delet();
				break;

			case 3:
				display();
				break;

			case 4:
				break;

			default:
				printf("Chose vaild number.....");
				break;
			}
		}
	}
	getch();
}