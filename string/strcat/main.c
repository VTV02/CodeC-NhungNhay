#include <stdio.h>
#include <stdlib.h>
//strcat dùng nối chuỗi với nhau nối vào ký tự nuul
//nối source vào chuỗi dest (dest,source)

int main()
{
    char dest[]="TR";
    char source[]="UNG";
    strcat(dest,source);
    printf("%s",dest);
    return 0;
}
