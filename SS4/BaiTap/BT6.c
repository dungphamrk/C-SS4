#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int max = a, min = a, num;
    max = (a > b) ? a : b;
    max = (c > max) ? c : max;
    min = (a < b) ? a : b;
    min = (c < min) ? c : min;
    num= a+b+c-max-min;
    printf("Max=%d \t Min=%d \t SCL=%d",max,min,num);
}