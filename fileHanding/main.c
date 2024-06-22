#include <stdio.h>
#include <stdlib.h>
char text[1000]="Toi yeu Viet Nam\n";
char string[1000]="Toi hoc lap trinh\n";
void writeFile()
{
    FILE *fptr;
    fptr=fopen("D:\\C_programing\\AnhBa.txt","a+");
    fputs(text,fptr);
    fputs(string,fptr);
    fseek(fptr,0,SEEK_SET);
    fclose(fptr);
}
void readFile()
{
    FILE *fptr;
    fptr=fopen("D:\\C_programing\\AnhBa.txt","a+");
    fgets(text,1000,fptr);
    fgets(string,1000,fptr);
    fclose(fptr);
    printf("%s\n%s",text,string);
}
int main()
{
    writeFile();
    readFile();
    return 0;
}
