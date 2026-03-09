#include <stdio.h>
#include <stdlib.h>

int main()
{
    // allocate memory
    int *ptr = (int *)malloc(sizeof(int));

    *ptr = 10;
    printf("%d\n", *ptr);

    // Forgot to free memory free(ptr) is missing
    return 0;
}