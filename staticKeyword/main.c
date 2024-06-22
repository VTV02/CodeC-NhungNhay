#include <stdio.h>
#include <stdlib.h>

int sum(void)
{
    static int z=1;// static + bien cuc bo.Vung nho duoc cap
    //cho bien cuc bo ko bi mat khi thoat khoi ham
    z++;
    printf("z= %d\n",z);
}



int main()
{
    //printf("%d",z);//van loi do z van chi la bien cuc bo thoi
    sum();//z=2//neu ko co static thi z=2
    sum();//z=3//z=2 luon do bien z bi thu hoi khi thoat khoi ham
    return 0;
}
