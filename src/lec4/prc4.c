#include <stdio.h>

int main(void)
{
    int choice;

    printf("Time\n");
    printf("1 morning\n");
    printf("2 afternoon\n");
    printf("3 night\n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Good morning\n");
        break;
    case 2:
        printf("Good afternoon\n");
        break;
    case 3:
        printf("Good night\n");
        break;
    default:
        printf("Selection error!\n");
        break;
    }

    return 0;
}
