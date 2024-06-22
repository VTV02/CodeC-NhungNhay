#include <stdio.h>
#include <stdlib.h>
//dung khi ko muon cho thay doi gia tri cua x
// ma chi cho pointer read thoi
int main()
{
    int x=100;
    int y=999;
    const int *pt=&x;
    pt=&y;
    //*pt=*pt-1;//ko the thay doi duoc vi la const pointer read-only
    printf("%d",*pt);
    return 0;
}
