/* Write a program to calculate arae of a circle*/
#include <stdio.h>
int main()
{
    float pi, radius;
    pi = 3.14;
    printf("Enter the value of radius : ");
    scanf("%f", &radius);
    float area = pi * radius * radius;
    printf("The area of a circle is : %f", area);
    return 0;
}