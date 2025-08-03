// implicit typ conversion
#include <stdio.h>
int main()
{
    int a = 1.999999;
    float b = 1.5;
    printf("%d\n", b);
    printf("%d\n", a);
    printf("%f\n", a);
    printf("%d\n", 1);
    printf("%f\n", 1.500000);
    printf("%d\n", 1.500000);
    printf("%f\n", 1.35);
    printf("%d\n", 1.35);
    printf("%d\n", 1.3600);
    printf("%f\n", 1);
    return 0;
}