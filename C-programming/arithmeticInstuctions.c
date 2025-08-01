#include <stdio.h>
int main()
{
    int a, b;
    a = b = 1;
    int sum = a + b;
    int multiplication = a * b;
    int subtraction = a - b;
    int division = a / b;
    int modulo = a % b;
    printf("%d\n", sum);
    printf("%d\n", multiplication);
    printf("%d\n", subtraction);
    printf("%d\n", division);
    printf("%d\n", modulo);
    return 0;
}