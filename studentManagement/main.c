#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int mssv;
    char ho[10];
    char dem[10];
    char ten[10];
    int age;
    char gender[3];
    float math;
    float english;
    float literature;
    float average;
}sv_infor;
    sv_infor sv_arr[100];
    int numberSV=0;
 sv_infor enterInfor(void)
{
    sv_infor sv;
    printf("\nNhap ma so sinh vien: ");
    scanf("%d",&sv.mssv);
    printf("Nhap ho va ten : ");
    scanf("%s %s %s",sv.ho,sv.dem,sv.ten);
    printf("Nhap tuoi:");
    scanf("%d",&sv.age);
    printf("Nhap gioi tinh: ");
    scanf("%s",&sv.gender);
    printf("Nhap diem toan: ");
    scanf("%f",&sv.math);
    printf("Nhap diem van: ");
    scanf("%f",&sv.literature);
    printf("Nhap diem tieng anh: ");
    scanf("%f",&sv.english);
    sv.average=(sv.math+sv.literature+sv.english)/3;
    numberSV++;
    return sv;
}

void disInfor(sv_infor sv,int index)
{
   //printf("SV[%d]\n",index);
   printf("MSSV Ho Dem Ten Tuoi Gioi Toan Van Anh TB\n");
   printf("%d|%s|%s|%s|%.2d|%s|%.2f|%.2f|%.2f|%.2f\n",sv.mssv,sv.ho,sv.dem,sv.ten,sv.age,sv.gender,sv.math,sv.literature,sv.english,sv.average);
}
void disAll(sv_infor *sv,int number)
{
    printf("%-s %-s %-s %-s %-s %-s %-s %-s %-s %-s","MSSV","Ho","Dem","Ten","Tuoi","Gioi","Toan","Van","Anh","TB\n");
    for(int i=0;i<number;i++)
    {
     printf("%-d %-s %-s %-s %-.2d %s %-.2f %-.2f %-.2f %-.2f\n",sv[i].mssv,sv[i].ho,sv[i].dem,sv[i].ten,sv[i].age,sv[i].gender,sv[i].math,sv[i].literature,sv[i].english,sv[i].average);
    }
}
int main()
{
    sv_arr[0]=enterInfor();
    disAll(sv_arr,numberSV);

    /*for(int i=0;i<100;i++)
    {
        sv[i]=enterInfor();
        disInfor(sv[i],i);
    }*/

    return 0;
}
