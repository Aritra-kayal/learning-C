// Write a program to calculate perimeter of a rectangle
#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter the value of length : ");
    scanf("%f", &a);
    printf("enter the value of width : ");
    scanf("%f", &b);
    float perimeter = 2 * (a + b);
    printf("Perimeter of a rectangle is : %f", perimeter);
    return 0;
}