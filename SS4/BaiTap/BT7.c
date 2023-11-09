#include <stdio.h>
int main()
{
    float a, b;
    printf("Nhập lương cơ bản\n");
    scanf("%f", &a);
    printf("Nhập số ngày công thực tế\n");
    scanf("%f", &b);
    if (b>26)
    {
        b=26+(b-26)*1,5;
    }
    float wage=a*b/26;
    printf("Lương của nhân viên tháng này là %.3f",wage);
}