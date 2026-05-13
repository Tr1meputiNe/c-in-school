#include <stdio.h>

int main(void)
{
    int a;
    int b;
    char op;

    if (scanf("%d %c %d", &a, &op, &b) != 3)
    {
        return 1;
    }

    switch (op)
    {
    case '+':
        printf("%d\n", a + b);
        break;
    case '-':
        printf("%d\n", a - b);
        break;
    case '*':
        printf("%d\n", a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("除数不能为0\n");
        }
        else if (a % b == 0)
        {
            printf("%d\n", a / b);
        }
        else
        {
            printf("%.2f\n", (double)a / b);
        }
        break;
    default:
        printf("运算符错误\n");
        break;
    }

    return 0;
}
