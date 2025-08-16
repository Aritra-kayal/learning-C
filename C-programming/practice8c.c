// print 1(true) or 0(false)
//  c. if a number is greater than 9 and less than 100 --> true
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a 2 digit number : ");
    scanf("%d", &x);
    printf("%d\n", x > 9 && x < 100);
    return 0;
}