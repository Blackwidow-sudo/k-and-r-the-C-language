#include <stdio.h>

// fill array
void fillArray(int* arr, int arrSize, int charType)
{
    int i;
    for (i = 0; i < arrSize; ++i) {
        arr[i] = i + charType;
    }
}

// prints the given array
void printArr(int* arr, int arrSize)
{
    int i;
    for (i = 0; i < arrSize; ++i)
        printf(" %c", arr[i]);
    putchar('\n');
}

// swaps two integers location
void swap(int *px, int *py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}