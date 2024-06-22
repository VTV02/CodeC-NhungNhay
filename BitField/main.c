#include <stdio.h>
#include <stdlib.h>
//dùng tối ưu bộ nhớ cho kiểu struct
// chỉ dùng khi các phần tử có cùng kiểu dữ liệu
typedef struct
{
    unsigned int day:5;// số bit muốn dùng cho biến đấy 2^5=>0->31
    unsigned int month:4;
    unsigned int year:11;
}bit_field;

int main()
{
    bit_field time;
    time.day=32;//ngày 32 sẽ ko đúng vì chỉ cấp cho nó có 5 bit thôi
    time.month=1;
    time.year=2024;
    printf("Day: %d\n",time.day);
    printf("Month: %d\n",time.month);
    printf("Year: %d\n",time.year);
    return 0;
}
