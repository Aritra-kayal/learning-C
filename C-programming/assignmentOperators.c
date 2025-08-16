// asssignment operators
#include <stdio.h>
int main()
{
    int a = 1;
    int b = 4;
    int c = a + b;
    printf("%d\n", c);
    // short hand operators
    int e = 1;
    printf("%d\n", e += b); /* e = e + b */
    int f = 4;
    printf("%d\n", f -= b); /* f = f - b */
    int g = 1;
    printf("%d\n", g *= b); /* g = g * b */
    int h = 10, i = 5;
    printf("%d\n", h /= i); /* h = h / i */
    int x = 10, y = 3;
    printf("%d\n", x %= y); /* x = x % y */
    return 0;
}