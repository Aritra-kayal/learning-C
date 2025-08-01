#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter the power : ");
    scanf("%d", &b);
    int power = pow(a, b);
    printf("Power of a number is : %d", power);
    return 0;
}