#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int result;
    
    printf("\n\n");
    printf("Enter first integer :");
    scanf("%d", &a);

    printf("\n\n");
    printf("Enter second integer :");
    scanf("%d", &b);

    result = a + b;
    
    printf("\n\n");
    printf("result = %d\n", result);
    

    return(0);
}
