#include <stdio.h>
int main()
{
    int num, d;
    printf("");
    scanf("%d", &num);
    if (num >= 0)
    {
        do
        {
            d = num % 10;
            printf("%d", d);
            num /= 10;
        } while (num != 0);
    }
    else if (num < 1)
    {
        num = num * -1;
        printf("-");
        do
        {
            d = num % 10;
            printf("%d", d);
            num /= 10;
        } while (num != 0);
    }
}