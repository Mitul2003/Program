// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char c;
	int i=0,pos;
	fp= fopen("rev.txt","r");
	if(fp==NULL)
	{
		printf("\nFile is does not exist.");
	}
	fseek(fp,0,SEEK_END);
	pos= ftell(fp);
	printf("\nThe Reverse String....\n");
	while(i<pos)
	{
		i++;
		fseek(fp,-i,SEEK_END);
		c=fgetc(fp);
		printf("%c",c);
	}
	getch();
}