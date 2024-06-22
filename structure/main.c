#include <stdio.h>
#include <stdlib.h>
//truy cap bien thanh vien thong thuong dung dau .
//truy cap bien thanh vien con tro dung dau ->
typedef struct{
    char name[20];
    int age;
    char gender[10];
}infor;

int main()
{
    infor sv1;
    printf("Moi nhap ten: ");
    gets(sv1.name);
    printf("Moi nhap gioi tinh: ");
    gets(sv1.gender);
    printf("Moi nhap tuoi: ");
    scanf("%d",&sv1.age);
    printf("Nam: %s\n",sv1.name);
    printf("Gioi tinh: %s\n",sv1.gender);
    printf("Tuoi: %d",sv1.age);

    return 0;
}
