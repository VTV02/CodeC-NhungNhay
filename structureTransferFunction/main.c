#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[20];
    char gender[10];
    int age;
}infor;

void enterInfor(infor *sv1)
{
    printf("Moi nhap ten: ");
    gets(sv1->name);
    printf("Moi nhap gioi tinh: ");
    gets(sv1->gender);
    printf("Moi nhap tuoi: ");
    scanf("%d",&sv1->age);
}
void disInfor(infor sv1)
{
    printf("Nam: %s\n",sv1.name);
    printf("Gioi tinh: %s\n",sv1.gender);
    printf("Tuoi: %d\n",sv1.age);
}

int main()
{
    infor sv1;
    enterInfor(&sv1);
    disInfor(sv1);
    printf("%d",sizeof(sv1));
    return 0;
}
