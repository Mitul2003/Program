// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *p,*q;
	char name[20],gechar;
	int i=0;
	printf("Enter name : ");
	scanf("%s",&name);
	p= fopen("vowel.txt","w");
	q= fopen("consonant.txt","w");
	while(i<strlen(name))
	{
		if(name[i]=='a'||name[i]=='A'||name[i]=='e'||name[i]=='E'||
		  name[i]=='i'||name[i]=='I'||name[i]=='o'||name[i]=='O'||
		  name[i]=='u'||name[i]=='U')
			putc(name[i],p);
		else
			putc(name[i],q);
		i++;
	}
	fclose(p),fclose(q);
	p= fopen("vowel.txt","r");
	q= fopen("consonant.txt","r");
	printf("\nvowel.txt contains : ");
	while((gechar=getc(p))!=EOF)
		printf("%c",gechar);
	printf("\nconsonant.txt contains : ");
	while((gechar=getc(q))!=EOF)
		printf("%c",gechar);
	fclose(p),fclose(q);
}