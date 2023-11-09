#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhap chi so cu\n");
    scanf("%d",&a);
    printf("Nhap chi so moi\n");
    scanf("%d",&b);
    int total = b - a;
    int money=0;
    if (total > 200)
    {
        money = 30000 * total;
    }
    else if (total > 150)
    {
        money = 25000 * total;
    }
     else if (total > 100)
    {
        money = 20000 * total;
    }
     else if (total > 50)
    {
        money = 15000 * total;
    }
     else if (total > 0)
    {
        money = 10000 * total;
    }
    printf(" tiền điện tiêu thụ trong tháng của hộ gia đình là %d",money);
}