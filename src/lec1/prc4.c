#include <stdio.h>

int main(void)
{
    {
        char c1, c2;
        c1 = 97;
        c2 = 98;

        printf("(1) c1 = %c, c2 = %c\n", c1, c2);
        printf("(1) c1 = %d, c2 = %d\n", c1, c2);
        // 第一行输出 a 和 b；第二行输出 97 和 98。
        // 原因：97和98是ASCII码，按%c输出字符就是a/b，按%d输出整数就是97/98。
    }

    {
        char c1, c2;
        c1 = (char)197; 
        c2 = (char)198;

        printf("(2) c1 = %c, c2 = %c\n", c1, c2);
        printf("(2) c1 = %d, c2 = %d\n", c1, c2);
        // 原因：197/198 超出有符号 1 字节 char 的范围(-128~127)，发生截断后分别变成 -59/-58。

    }

    {
        int c1, c2;
        c1 = 97;
        c2 = 98;

        printf("(3) c1 = %c, c2 = %c\n", c1, c2);
        printf("(3) c1 = %d, c2 = %d\n", c1, c2);

        //原因：97/98对应 a/b；%d 直接输出整数值 97/98。
    }

    return 0;
}
