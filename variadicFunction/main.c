#include <stdio.h>
#include <stdlib.h>
#include<stdarg.h>
//int a=atoi(c) bien ky tu ve dang so
int sum(int number,...)
{
    int tong=0;
    va_list ptr;//định nghĩa con trỏ tới argument list
    va_start(ptr,number);
    for(int i=0;i<number;i++)
    {
        tong= tong+va_arg(ptr,int);
    }
    va_end(ptr);
    return tong;
}


int main()
{
    int res=sum(2,1,100);//truyen vao 2 tham so va phia sau la 2 tham so do
    printf("%d",res);
    return 0;
}
