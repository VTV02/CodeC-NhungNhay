#include <stdio.h>
#include <stdlib.h>
    char name[30];
    int age;
    char gender[10];
//function nhap thong tin ca nhan
void enterInfor(void)
{
    printf("Nhap Ho va Ten: ");
    gets(name);
    printf("Nhap gioi tinh: ");
    gets(gender);
    printf("Nhap tuoi: ");
    scanf("%d",&age);

}
//function xuat thong tin ca nhan
void disInfor(void)
{
    printf("\n***************\n");
    printf("Ho va Ten: %s\n",name);
    printf("Gioi tinh: %s\n",gender);
    printf("Tuoi: %d\n",age);

}

int main()
{
    enterInfor();
    disInfor();
    return 0;
}
