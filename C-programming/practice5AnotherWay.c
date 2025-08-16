// write a program to check if a number is divisible by 2 or not
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    /*
    if the output will be 1 in that case the number is divisible by 2.
    if the output will be 0 in that case the number is not divisible by 2.
    */
    printf("%d", x % 2 == 0);
    return 0;
}