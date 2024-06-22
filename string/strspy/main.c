#include <stdio.h>
#include <stdlib.h>
//copy chuoi nguon dan de vao chuoi dich (dest,source)
//vung luu tru cua dest phai du bo nho cho copy
int main()
{
    char dest[]="TR";
    char source[]="UNG";
    strcpy(&dest[2],source);//copy source dan vao vi tri 2 trong dest
    printf("%s",dest);
    return 0;
}
