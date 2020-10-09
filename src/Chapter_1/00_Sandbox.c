#include <stdio.h>
#include "00_myHeader.h"

#define SIZE_OF_ALPHABET 26
#define NUM_OF_DIGITS 10

int main(void)
{
    int num1, num2;
    int alpha_u[SIZE_OF_ALPHABET];
    int alpha_l[SIZE_OF_ALPHABET];
    int nums[NUM_OF_DIGITS];
    
    fillArray(alpha_u, SIZE_OF_ALPHABET, 'A');
    printArr(alpha_u, SIZE_OF_ALPHABET);

    fillArray(alpha_l, SIZE_OF_ALPHABET, 'a');
    printArr(alpha_l, SIZE_OF_ALPHABET);

    fillArray(nums, NUM_OF_DIGITS, '0');
    printArr(nums, NUM_OF_DIGITS);

    num1 = 50;
    num2 = 25;
    printf("num1 = %d;\nnum2 = %d;\n", num1, num2);
    swap(&num1, &num2);
    printf("swap the nums:\nnum1 = %d;\nnum2 = %d;\n", num1, num2);

    return 0;
}