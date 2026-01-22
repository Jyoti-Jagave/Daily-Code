#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
    int numerator, denominator, quotient;

    printf("Enter numerator:");
    scanf_s("%d", &numerator);

    printf("Enter denominator:");
    scanf_s("%d", &denominator);

    assert(denominator != 0);

    quotient = numerator/denominator;
    printf("Quotient = %d\n", quotient);

    return (EXIT_SUCCESS);
}