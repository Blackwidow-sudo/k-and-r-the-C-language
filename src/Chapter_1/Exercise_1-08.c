/**
 * Write a program to count blanks, tabs and newlines.
 */
#include <stdio.h>

// counting blanks, tabs and newlines from input; 1st version
int main(void)
{
    int letter, blnkCnt, tbCnt, nlCnt;

    blnkCnt = tbCnt = nlCnt = 0;

    while ((letter = getchar()) != EOF)
    {
        if (letter == ' ')
            ++blnkCnt;
        else if (letter == '\t')
            ++tbCnt;
        else if (letter == '\n')
            ++nlCnt;
    }
    printf("blanks: %d\ntabs: %d\nnewlines: %d\n", blnkCnt, tbCnt, nlCnt);

    return 0;
}