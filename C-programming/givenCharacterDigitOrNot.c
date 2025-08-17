// write a program to check if given character is digit or not
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);
    if (c >= '0' && c <= '9')
    {
        printf("%c is a digit", c);
    }
    else
    {
        printf("%c is not a digit", c);
    }
    return 0;
}