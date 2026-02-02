#include <stdio.h>
#include <stdlib.h>

void test_1(void);

int main(void)
{
    test_1();
    return (0);

}

void test_1(void)
{
    int* ptr = NULL;

    int n;
    ptr = &n;

    ptr = (int*)malloc(sizeof(int));
    free(ptr);

    int a[8];
    ptr = &a[0];
    ptr = a;

    ptr = (int*)malloc(8 * sizeof(int));
    // *(ptr+i) or ptr[i]
    free(ptr);
    ptr = NULL;
    /////////////////////////////////////////
}

void test_2(void)
{
    int* ptr = NULL;
    int i;
    int n;
    ptr = &n;
    *ptr;

    ptr = (int*)malloc(sizeof(int));
    *ptr;
    free(ptr);

    int a[8];
    ptr = &a[0];
    ptr = a;
    *(ptr+i);
    ptr[i]; // where i is between 0 to length of array - 1

    ptr = (int*)malloc(8 * sizeof(int));
    *(ptr + i);
    ptr[i]; // i between 0 to length - 1

    free(ptr);
}