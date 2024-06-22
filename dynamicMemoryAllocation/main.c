#include <stdio.h>
#include <stdlib.h>
//kết thúc hàm vẫn ko bị mất ta pahir giải phóng bộ nhớ
//
int main()
{
    int *arr = malloc(10*sizeof(int));//Style1: 10 vùng nhớ kiểu int
    //int *arr=calloc(10,sizeof(int));//Style2: số phần tử và kiểu dữ liệu
    arr[0]=6996;
    printf("%d",arr[0]);
    free(arr);//sau khi cấp phát xài xong phải có hàm free để giải phóng tránh tràng bột nhớ
    return 0;
}
