// write a program to calculate area of a square
#include <stdio.h>
int main()
{
    float side;
    printf("Enter the value of side : ");
    scanf("%f", &side);
    float area = side * side;
    printf("Area of a square is : %f", area);
    return 0;
}