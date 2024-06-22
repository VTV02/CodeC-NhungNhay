#include <stdio.h>
#include <stdlib.h>
//các phần tử được cấp phát liên tục trên ram
//A[5] tức có 5 phần tử thôi từ A[0]->A[4]
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
int main()
{
    unsigned char Arr[100];
    int number;
    int max;
    enterArr(Arr,&number);//dia chi cua Arr cung tuc la Arr
    max=findMax(Arr,number);
    printf("%d",max);
    //disArr(Arr,number);
    return 0;
}
