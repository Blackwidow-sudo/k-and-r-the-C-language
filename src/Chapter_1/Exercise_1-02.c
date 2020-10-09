/**
 * Escape sequence characters (some of them):
 * '\n', '\t', '\b', '\\' and '\"'
 * 
 * Experiment to find out what happens when printf's argument
 * string contains \c, where c is some character not listed above.
 */
#include <stdio.h>

int main(void)
{
    printf("The \"Hello World\" Program with escape sequences.");
    return 0;
}