/* int op int --> int
   int op float --> float
   float op float --> float
*/
#include <stdio.h>
int main()
{
    int a, b;
    float c, d;
    a = 1, b = 2;
    c = 3.5, d = 4.6;
    printf("%d\n", a + b);
    printf("%f\n", c + d);
    printf("%f\n", a + c);
    printf("%d\n", 3 / 2);   /*it is not right*/
    printf("%f\n", 3 / 2);   /*it is not right*/
    printf("%f\n", 3.0 / 2); /*it is right*/
    printf("%f\n", 2.0 / 3); /*it is right*/
    printf("%f\n", c / d);
    printf("%f\n", d / c);
    printf("%d\n", a / b);
    printf("%f\n", a / b);
    printf("%d\n", 1.0 / 2.0);
    printf("%f\n", 1.0 / 2.0);
    return 0;
}