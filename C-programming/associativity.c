// associativity(for same precedence)left to right
#include <stdio.h>
int main()
{
    int x = 4 * 3 / 6 * 2;
    printf("%d\n", x);
    int a = 5 * 2 - 2 * 3;
    printf("%d\n", a);
    int b = 5 * 2 / 2 * 3;
    printf("%d\n", b);
    int c = 5 * (2 / 2) * 3;
    printf("%d\n", c);
    int d = 5 + 2 / 2 * 3;
    printf("%d\n", d);
    return 0;
}