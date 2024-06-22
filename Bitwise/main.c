#include <stdio.h>
#include <stdlib.h>

int main()
{


    unsigned int a = 60;//0011 1100
    unsigned int b = 13;//0000 1101
    int result = 0;
    /*int result1 = 0;
    result = a&b;//0000 1100
    result1 = a|b;//0011 1101
    printf("result is : %d\n",result);*/
    //result = a<<2;//1111 0000
    //result = a<<4;//0011 1100 0000
    result = a>>4;//0000 0011
    printf("result is : %d\n",result);
    return 0;
}
