#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    a = a / 100 + a / 10 % 10 * 10 + a % 10 * 100;
    printf("%d\n", a);
    return 0;
}