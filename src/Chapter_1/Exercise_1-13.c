/**
 * Write a program to print a histogram of the lengths of words in
 * its input. It is easy to draw the histogram with the bars horizontal;
 * a vertical orientation is more challenging.
 */
#include <stdio.h>

#define MAX_WORD_LEN 20 /* maximum length of words */

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

int main(void)
{
    int c = 0; // var to store input char
    int state;
    int cCount = 0; // to count the chars in a word
    int countArr[MAX_WORD_LEN]; // array to hold the occurrences of word lengths

    // Initializing the array with zeros
    for (int i = 0; i < MAX_WORD_LEN; ++i)
        countArr[i] = 0;

    // Counting the word lengths
    while ((c = getchar()) != EOF) {
        state = IN;
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (cCount > 0 && cCount <= MAX_WORD_LEN) {
                ++countArr[cCount - 1];
                cCount = 0;
            }
        }
        else if (state == IN && cCount <= MAX_WORD_LEN)
            ++cCount;
    }

    // Draw the histogram
    for (int i = MAX_WORD_LEN; i > 0; --i) {
        printf("| %2d |", i);
        for (int j = 0; j < countArr[i - 1]; ++j)
            putchar('#');
        putchar('\n');
    }

    return 0;
}