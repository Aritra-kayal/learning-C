#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int cube = n * n * n;
    printf("Cube of a number is : %d", cube);
    return 0;
}