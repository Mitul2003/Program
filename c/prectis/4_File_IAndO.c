#include<stdio.h>

void main(){
    FILE  *ptr = NULL;
    char string[64] = "This content was produced by Tutorial4";

    // ***********Reading A File
    // ptr = fopen("myFile.txt","r");
    // fscanf(ptr, "%s" ,string);
    // printf("The content of this File has %s\n",string);

    // *******Writing A File***********
    ptr = fopen("myFile.txt","w");  // file ni anadar rahel text ne dur kari ne navo text umere 
    fprintf(ptr,"%s",string);

    ptr = fopen("myFile.txt","a");  // file ni anadar rahel text ni niche lakhava
    fprintf(ptr,"%s",string);
}