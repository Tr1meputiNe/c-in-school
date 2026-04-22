#include <stdio.h>
#include <math.h>

int main() 
{
    int a;
    do{
        scanf("%d", &a);
    }while(a < 0 || a > 1000);
    printf("%d\n", (int)sqrt(a));
    return 0;

}