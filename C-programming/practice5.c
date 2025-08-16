// write a program to check if a number is divisible by 2 or not
#include <stdio.h>
int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d", &x);
    int y = x % 2;
    /* if the reminder is 0 so the number is devisible by 2 otherwise not divisible by 2*/
    printf("%d\n", y);
    return 0;
}