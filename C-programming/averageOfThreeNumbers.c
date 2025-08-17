// write a program for average of three numbers
#include <stdio.h>
int main()
{
    float a, b, c, d;
    // printf("Enter three number : ");
    // scanf("%f%f%f", &a, &b, &c);
    printf("Enter 1st number : ");
    scanf("%f", &a);
    printf("Enter 2nd number : ");
    scanf("%f", &b);
    printf("Enter 3rd number : ");
    scanf("%f", &c);
    d = (a + b + c) / 3;
    printf("Average of three numbers is : %f\n", d);
    return 0;
}