#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if (number%3==0 && number%5==0)
    {
        printf("%d chia hết cho cả 3 và 5",number);
    }
    else printf("số đó ko chia hết cho cả 3 và 5");
}