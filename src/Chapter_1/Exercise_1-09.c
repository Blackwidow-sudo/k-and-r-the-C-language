/**
 * Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.
 */
#include <stdio.h>

// copy input to output, replacing each string of one or more blanks by a single blank
int main(void)
{
    int c = 0;
    int last_c = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
            putchar(c);
        if (c == ' ')
            if (last_c != ' ')
                putchar(c);
        last_c = c;
    }
    putchar('\n');
    
    return 0;
}

 