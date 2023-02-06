/*

program to read data from file.

*/



#include<stdio.h>

int main(){

FILE *fptr;
char ch;

fptr=fopen("C:\\Users\\shree\\Documents\\aht_ex_5.txt","r");

if (fptr==NULL)
{
    printf("Error");
}

ch=fgetc(fptr);

    while (ch != EOF)

    {

        printf ("%c", ch);

        ch = fgetc(fptr);

    }

fclose(fptr);


    return 0;
}
