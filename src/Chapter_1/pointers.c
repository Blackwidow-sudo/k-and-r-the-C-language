#include <stdio.h>

void swap(int *x, int *y);
void fillArray(int *arr, int len);

#define MAX_ARR_SIZE 10
#define NELEMS(x) (sizeof(x) / sizeof(x[0]))

int main(void)
{
    int i;
    int arr[MAX_ARR_SIZE];

    // fill array
    fillArray(arr, MAX_ARR_SIZE);

    // print array before swap
    for (i = 0; i < MAX_ARR_SIZE; i++)
        printf(" %d", arr[i]);
    putchar('\n');
    
    // swap
    for (i = 0; i < MAX_ARR_SIZE; i += 2)
        swap(&arr[i], &arr[i + 1]);

    // print array after swap
    for (i = 0; i < MAX_ARR_SIZE; i++)
        printf(" %d", arr[i]);
    putchar('\n');

    // sizeof() test with string
    const char str[] = "Hello World";
    int strlen = NELEMS(str);
    printf("String is:\t%s;\nSize is:\t%d;\n",str, strlen);

    return 0;
}

void swap(int *px, int *py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}

void fillArray(int *arr, int len)
{
    int i;
    for (i = 0; i < len; i++)
        arr[i] = i;
}