/* operator precedence
(*,/,%) --> (+,-) --> (=)
*/
#include <stdio.h>
int main()
{
    int x = 4 + 9 * 10;
    printf("%d\n", x);
    return 0;
}