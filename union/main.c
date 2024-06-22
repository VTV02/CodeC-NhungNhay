#include <stdio.h>
#include <stdlib.h>

typedef union
{
    float x;
    int y;
    char z[5];
}test_t;

int main()
{
    test_t unit1;
    unit1.x=15.5;
    unit1.y=6;
    unit1.z[0]='T';
    printf("%f\n",unit1.x);
    printf("%d\n",unti1.y);
    printf("%s",unit1.z);
    return 0;
}
