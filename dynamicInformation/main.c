#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *name=calloc(10,sizeof(char));
    int *age = calloc (5,sizeof(int));
    printf("Nhap ten: ");
    gets(name);
    printf("Nhap tui: ");
    scanf("%d",age);
    printf("Name : %s\n",name);
    printf("Age : %d",*age);
    free(name);
    free(age);
    return 0;
}
