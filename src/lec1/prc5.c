#include <stdio.h>

int main(void)
{
    int a, b;
    float x, y;
    char c1, c2;

    scanf("a=%d,b=%d", &a, &b);
    scanf("%f%f", &x, &y);
    scanf("%c%c", &c1, &c2);
    /*
     * a=3,b=7
     * 8.5 71.82Aa
     *
     * 为什么这样输：
     * 1) 第1个 scanf 的格式串有固定字符 a= 和 ,b=，输入时必须匹配。
     * 2) 第2个 scanf("%f%f") 两个浮点数用空格或回车分隔都可以。
     * 3) 第3个 scanf("%c%c") 不会自动跳过空白字符；
     *    所以要让 A、a 紧跟在 71.82 后面，避免先被 '\n' 读走。
     */

    printf("a=%d b=%d x=%.2f y=%.2f c1=%c c2=%c\n", a, b, x, y, c1, c2);
    return 0;
}
