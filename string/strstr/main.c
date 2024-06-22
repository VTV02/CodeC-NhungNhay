#include <stdio.h>
#include <stdlib.h>
//Tìm một chuỗi trong chuỗi mẹ (str,substr)
//cái trả về là địa chỉ của chuỗi con tìm được trong chuỗi mẹ
int main()
{
    char str[]="TRUNG";
    char substr[]="UNG";
    char *addr=strstr(str,substr);
    printf("%d\n",str);
    printf("%d\n",substr);
    printf("%d\n",addr);
    printf("Tim thay tai dia chi : %d",addr-str);
    return 0;
}
