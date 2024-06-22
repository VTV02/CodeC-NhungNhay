#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,rs;
    char math;
    printf("Nhap vao phep toan : ");
    scanf("%c",&math);
    printf("Nhap 2 so x va y : ");
    scanf("%d%d",&x,&y);
    switch(math){
        case '+': rs = x+y;
        break;
        case '-': rs = x-y;
        break;
        case '*': rs = x*y;
        break;
        case '/':rs = x/y;
        break;}
    printf("Result x %c y = %d",math,rs);
    return 0;
}
