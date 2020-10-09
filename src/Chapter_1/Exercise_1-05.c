/**
 * Modify the temperature conversion program to print the table in
 * reverse order, that is, from 300 degrees to 0.
 * (with a for-loop, which has been previously discussed)
 */
#include <stdio.h>

int main(void)
{
    int fahr;

    printf("%2c %5c\n", 'F', 'C');

    for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%3d %6.1f\n", fahr, ((5.0 / 9.0) * (fahr - 32)));
    }

    return 0;
}