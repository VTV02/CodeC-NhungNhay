#include <stdio.h>
#include <stdlib.h>

float ptbac1(float *a,float *b)
{   printf("Giai phuong trinh bac I : ax+b=0 \n");
    printf("Nhap a : ");
    scanf("%d",a);
    printf("Nhap b : ");
    scanf("%d",b);
    float x=0;
    if(*a==0)
    {
        if(*b==0)
        {
          printf("PT VSN");
        }else{
        printf("PT VN");}

    }
    else {
    x=-(*b)/(*a);
    printf(" x = %.2f",x);}

}

int main()
{
    float a,b;
    ptbac1(&a,&b);
    return 0;
}
