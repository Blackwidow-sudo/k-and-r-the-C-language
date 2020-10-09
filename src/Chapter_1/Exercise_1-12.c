/**
 * Write a program that prints its input one word per line.
 */
#include <stdio.h>

#define PRINTED 1       /* Newline was printed before */
#define NOTPRINTED 0    /* No Newline was printed before */

/* print input one word per line */
int main(void)
{
    int c = 0;
    int nl_check = NOTPRINTED;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (nl_check == NOTPRINTED) {   
                putchar('\n');
                nl_check = PRINTED;
            }
        } else {
            putchar(c);
            nl_check = NOTPRINTED;
        }
    }
    putchar('\n');

    return 0;
}