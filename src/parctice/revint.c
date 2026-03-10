#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter a two-digit number: ");
    scanf("%d", &a);
    b = a % 10;
    c =a / 10;
    if (b == 0)
    {
        printf("The reversal is: %d\n", c);
    }
    else
    {
        printf("The reversal is: %d%d\n", b, c);
    }
    return 0;
}