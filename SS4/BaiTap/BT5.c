#include <stdio.h>
int main()
{
    int year, month, day;
    printf("Nhap vao nam\n");
    scanf("%d", &year);
    if (year < 0)
    {
        printf("Giá trị năm ko hợp lệ");
        return 0;
    }

    printf("Nhap vao so thang\n");
    scanf("%d", &month);
    if ((month < 0) || (month > 12))
    {
        printf("Giá trị tháng ko hợp lệ");
        return 0;
    }
    printf("Nhap vao so ngay\n");
    scanf("%d", &day);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if ((day < 0) || (day > 31))
        {
            printf("Giá trị ngày ko hợp lệ");
            return 0;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if ((day < 0) || (day > 30))
        {
            printf("Giá trị ngày ko hợp lệ");
            return 0;
        }
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            if ((day < 0) || (day > 29))
            {
                printf("Giá trị ngày ko hợp lệ");
                return 0;
            }
        }
        else if ((day < 0) || (day > 28))
        {
            printf("Giá trị ngày ko hợp lệ");
            return 0;
        }
        break;
    default:
        break;
    }
    printf("Giá trị ngày tháng năm hợp lệ");
}