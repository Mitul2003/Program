// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *p1, *p2, *p3;
	char ch;
	p1= fopen("test1.txt","r");
	p2= fopen("test2.txt","r");
	p3= fopen("test3.txt","w");
	if(p1==NULL || p2==NULL || p3==NULL)
	{
		puts("\nTHe File is not open.");
		exit(0);
	}
	while((ch=fgetc(p1))!=EOF)
		putc(ch,p3);
	while((ch=fgetc(p2))!=EOF)
		putc(ch,p3);
	printf("\nTwo Files were merged......");
	fclose(p1);
	fclose(p2);
	fclose(p3);
}