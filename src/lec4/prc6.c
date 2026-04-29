#include <stdio.h>

int main(void)
{
    int n;
    int d3;
    int d5;
    int d7;
    int x;

    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    d3 = (n % 3 == 0);
    d5 = (n % 5 == 0);
    d7 = (n % 7 == 0);
    x = d3 + d5 + d7;

    if (x == 3)
    {
        printf("能同时被3 5 7 整除.\n");
    }
    else if (x == 2)
    {
        if (d3 && d5)
        {
            printf("能被3和5整除\n");
        }
        else if (d3 && d7)
        {
            printf("能被3和7整除.\n");
        }
        else
        {
            printf("能被5和7整除\n");
        }
    }
    else if (x == 1)
    {
        if (d3)
        {
            printf("只能被3整除.\n");
        }
        else if (d5)
        {
            printf("只能被5整除.\n");
        }
        else
        {
            printf("只能被7整除\n");
        }
    }
    else
    {
        printf("不能被3 5 7 任一个整除\n");
    }

    return 0;
}
