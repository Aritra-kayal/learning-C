// write a program for smallest number of two
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers :\n");
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        printf("Smallest number is : %d", a);
    }
    else
    {
        printf("Smallest number is : %d", b);
    }
    return 0;
}