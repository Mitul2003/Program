 // mod   :
            // r  = read karva
            // w  = file ni anadar nu lakhan delete kari ne navu lakhava
            // a  = text file ni anadar jodva
            // r+ = reading and write pan thai           
            // w+ = file hoy to khali thai jay and file no hoy to banavi nakhe
            // a+ = reding and writing jodi dey che

    // Function :
            // fputc = write(insert) charcters
            // fputs = string ne insert karva
            // fgetc = charater read karva
            // fgets = string read karva
#include<stdio.h>
void main(){
        FILE  *ptr = NULL;
        // ptr = fopen("myFile.txt","r");

        // char c = fgetc(ptr);
        // printf("The Character I read Was %c\n", c);

        // char str[4];
        // fgets(str,5,ptr);
        // printf("The string I read Was %s\n", str);

        // ptr = fopen("myFile.txt","w");
        // // fputc('o',ptr);
        // fputs("This is Mitul",ptr);

        fclose(ptr);
}