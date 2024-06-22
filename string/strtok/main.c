#include <stdio.h>
#include <stdlib.h>
//chia chuõi dài thành các chuỗi nhỏ phân rẽ với nhau bởi các ký tự đặc biệt
//vd 14/01/2024 chia ra thành ngày tháng năm
// (chuỗi lớn,"ký tự ");
int main()
{
    char dmy[]="14/01/2024";
    char day[5];
    char month[5];
    char year[5];
    char *token=strtok(dmy,"/");// token đang lưu địa chỉ của 24
    //printf("%s",token);
    //strcpy(day,token);
    while(token!=NULL)//nếu token đang trỏ đến vùng nhớ ko phải NUUL
    {
        printf("%s\n",token);
        token=strtok(NULL,"/");//hiểu là đang muốn tách từ 04 chứ ko phải tách từ đầu nữa

    }
    //printf("date: %s\n",day);
    //printf("month: %s\n",month);
    //printf("year: %s",year);
    return 0;
}
