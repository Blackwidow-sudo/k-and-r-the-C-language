#include <stdio.h>

int main(void)
{
    int j, k;
    int *ptr;

    j = 1;
    k = 2;
    ptr = &k;

    printf("j has the value %d and is stored at %p\n", j, (void *)&j);
    printf("k has the value %d and is stored at %p\n", k, (void *)&k);
    printf("ptr has the value %p and is stored at %p\n", ptr, (void *)&ptr);
    printf("The value of the integer pointed to by ptr is %d\n", *ptr);
    return 0;
}

/* 
    int num1 = 3;
    int* pNum;
    printf("int num1 = %d;\nint* pNum;\n", num1);

    // the memory-address of num1 gets assigned to pNum
    pNum = &num1;
    printf("pNum = &num1; // pNum points now to address of num1: %p\n", &num1);

    // to assign a new value to the variable pointed to by pNum, we have to dereference it with an asterisk
    *pNum = 69;
    printf("*pNum = 69; // dereference pNum to assign 69 to the variable pointed-to\nnum1 is now: %d\n", *pNum);
*/