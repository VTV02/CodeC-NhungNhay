#include <stdio.h>
#include <stdlib.h>
//strcmp so sanh do lon giua Str1 vs Str2
//la do lon theo ASCII chu ko phai do dai
int main()
{
    char s2[]="trung";
    char s1[]="TRUNG";
    int ss= strcmp(s2,s1);// chi can so sanh ky tu dau nen lon hon la lon hon
    if(ss>0)
    {
        printf("S2>S1");

    }
    else printf("S2<S1");

    return 0;
}
