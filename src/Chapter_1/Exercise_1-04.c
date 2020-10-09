/**
 * Write a program to print the corresponding Celsius to Fahrenheit
 * table.
 */
#include <stdio.h>

int main(void)
{
    float celsius, fahr;
    float lower, upper, step;

    lower = -20;    /* lower limit of temperature table */
    upper = 150;    /* upper limit */
    step = 10;      /* step size */

    printf("%2c %5c\n", 'C', 'F'); // table heading
    
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}