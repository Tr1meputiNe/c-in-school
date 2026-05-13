#include <stdio.h>

int main(void)
{
    char ch;

    if (scanf(" %c", &ch) != 1)
    {
        return 1;
    }

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("大写字母\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("小写字母\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("数字\n");
    }
    else
    {
        printf("其他字符\n");
    }

    return 0;
}
