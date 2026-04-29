#include <stdio.h>

int main(void)
{
    int year;
    int month;
    int r;
    int days;


    r = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        if (r)
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
        break;
    default:
        printf("\n");
        return 0;
    }

    printf("%d\n", days);
    return 0;
}
