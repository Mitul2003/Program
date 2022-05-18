// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include<math.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	FILE *all,*even,*odd;
	int number,i,rec;

	printf("\nInput The Total Number Of records That U Want To Enter : ");
	scanf("%d",&rec);
	all=fopen("all.DAT","w");
	for(i=1;i<=rec;i++)
	{
		scanf("%d",&number) ;
		putw(number,all);

	}
	fclose(all);
	all=fopen("all.DAT","r");
	even=fopen("even.DAT","w");
	odd=fopen("odd.DAT","w");
	while((number=getw(all))!=EOF)
	{
		if(number%2==0)
			putw(number,even);
		else
			putw(number,odd);

	}
	fclose(all);
	fclose(even);
	fclose(odd);

	even=fopen("even.DAT","r");
	odd=fopen("odd.DAT","r");
	printf("\nThe Even Number Are\n");
	while((number=getw(even))!=EOF)
	{
		printf("%4d",number);
	}
	printf("\nThe Odd Number Are\n");
	while((number=getw(odd))!=EOF)
	{
		printf("%4d",number);
	}
	fclose(even);
	fclose(odd);
}