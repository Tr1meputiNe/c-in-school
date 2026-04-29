#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;
    int temp;

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num1 > num3)
    {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("%d %d %d\n", num1, num2, num3);
    return 0;
}
