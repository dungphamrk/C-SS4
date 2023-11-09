#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    if (a + b > c && a + c > b && b + c > a)
    {
        if ((a == b)&&(a==c))
        {
            printf("Đó là tam giác đều");
        }
        else if (((a * a + b * b == c * c)&&(a==b)) || ((a * a + c * c == b * b)&&(a==c)) || ((b * b + c * c == a * a)&&(b==c)))
        {
            printf("Đó là tam giác vuông cân ");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Đó là tam giác cân");
        }
        else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
        {
            printf("Đó là tam giác vuông");
        }
        else printf("đó là tam giác thường");
    }
    else printf("đó ko phải là 3 cạnh của 1 tam giác");
}   
