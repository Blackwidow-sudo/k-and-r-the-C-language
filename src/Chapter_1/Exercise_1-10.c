/**
 * Write a program to copy its input to its output, replacing each
 * tab by \t, each backspace by \b and each backslash by \\. This makes tabs
 * and backspaces visible in an unimbiguous way.
 */
#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */
/**
 * copy input to output, 
 * replacing each tab by \t
 * each backspace by \b
 * and each backslash by \\
 */
int main(void)
{
    int c = 0; // Input Character
    int check; // Check if the char is outside a word

    while ((c = getchar()) != EOF)
    {
        check = IN; // Set check to 0, each iteration
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
            check = OUT;
        }
        if (c == '\b')
        {
            putchar('\\');
            putchar('b');
            check = OUT;
        }
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
            check = OUT;
        }
        if (check == IN)
            putchar(c);
    }
    putchar('\n');
    
    return 0;
}