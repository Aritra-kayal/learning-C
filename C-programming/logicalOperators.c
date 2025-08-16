// logical operators
#include <stdio.h>
int main()
{
    // logical AND operator
    printf("%d\n", 4 > 5 && 5 > 4);
    // logical OR operator
    printf("%d\n", 4 > 5 || 5 > 4);
    // logical NOT operator
    printf("%d\n", !(4 > 5));
    printf("%d\n", !((5 > 4) && (4 > 5)));
    return 0;
}