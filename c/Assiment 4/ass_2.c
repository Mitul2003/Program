// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C		
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *p;
	int line=0,word=0,chars=0,space=0;
	char c;
	p= fopen("read.txt","r");
	while((c=getc(p))!= -1)

		if(c=='\n')
			line++,word++,chars++;
		else if(c==' ')
			space++,chars++;
	word+=space+1;
	printf("\nCharacters: %d\nWords: %d\nSpaces: %d\nLines: %d",
		chars,word,space,line);
}