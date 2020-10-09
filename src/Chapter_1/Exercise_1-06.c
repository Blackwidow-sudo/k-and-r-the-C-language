/**
 * Verify that the expression getchar() != EOF is 0 or 1
 */
#include <stdio.h>

int main(void)
{
    int c;
    /**
     * In bash, we can signal a EOF to the program with [Ctrl]+[D]
     */
    c = (getchar() != EOF);
    printf("The expression 'getchar() != EOF' is: %d\n", c);

    return 0;
}