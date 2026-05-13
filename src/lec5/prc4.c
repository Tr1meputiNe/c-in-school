#include <stdio.h>

int main(void)
{
    int age;

    if (scanf("%d", &age) != 1)
    {
        return 1;
    }

    if (age < 0)
    {
        printf("输入错误\n");
    }
    else if (age <= 12)
    {
        printf("儿童\n");
    }
    else if (age <= 17)
    {
        printf("青少年\n");
    }
    else if (age <= 35)
    {
        printf("青年\n");
    }
    else if (age <= 59)
    {
        printf("中年\n");
    }
    else
    {
        printf("老年\n");
    }

    return 0;
}
