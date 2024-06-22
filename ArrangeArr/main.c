#include <stdio.h>
#include <stdlib.h>

void enterArr(unsigned char Arr[],int *number)
{
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",number);
    for(int i=0;i<(*number);i++)
    {
        printf("Nhap phan tu Arr[%d]:",i);
        scanf("%d",&Arr[i]);
    }
}
void disArr(unsigned char Arr[],int number)
{
    for(int i=0;i<number;i++)
    {
        printf("Phan tu Arr[%d]= %d\n",i,Arr[i]);
    }

}
int findMax(unsigned char Arr[],int number)
{
    int max=Arr[0];
    for(int i=1;i<number;i++)
    {
        if(max<Arr[i])
        {
            max=Arr[i];

        }
    }
    return max;

}
void changePos(unsigned char *x,unsigned char *y)
{
    unsigned char z;
    if(*x<*y)
    {
        z=*x;
        *x=*y;
        *y=z;
    }
}
void Arrange_decr(unsigned char Arr[],int number)
{
    for(int i=0;i<number;i++)
    {
        for(int j=i+1;j<number;j++)
        {
            changePos(&Arr[i],&Arr[j]);
        }
    }
}
void delArr(unsigned char Arr[], unsigned char number,int index)
{
    for(int i=index;i<number-1;i++)
    {
        Arr[i]=Arr[i+1];
    }
}
int main()
{
    unsigned char Arr[100];
    int number;
    int max;
    unsigned char x=10,y=20;
    enterArr(Arr,&number);//dia chi cua Arr cung tuc la Arr
    Arrange_decr(Arr,number);
    delArr(Arr,number,2);
    //changePos(&x,&y);
    //max=findMax(Arr,number);
    //printf("%d\n",x);
    //  printf("%d",y);
    disArr(Arr,number-1);
    return 0;
}
