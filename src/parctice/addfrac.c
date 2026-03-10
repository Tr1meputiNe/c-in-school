#include <stdio.h>

int main() 
{
    int num1, num2, den1, den2, result_num, result_den;

    printf("Enter the firsst fraction: ");
    scanf("%d/%d", &num1, &den1);

    printf("Enter the second fraction: ");
    scanf("%d/%d", &num2, &den2);

    result_num = num1 * den2 + num2 * den1;
    result_den = den1 * den2;
    printf("The sum of the two fractions is %d/%d\n", result_num, result_den);
    return 0;
}