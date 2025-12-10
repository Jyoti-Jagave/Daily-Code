#include <stdio.h>

int my_add(int, int);
int my_sub(int, int);
int my_mul(int, int);
int my_quotient(int, int);

int main(void){
    int (*pfn)(int, int);
    int n1 = 23;
    int n2 = 3;
    int result;

    pfn = my_add;
    result = pfn(n1, n2);
    printf("result = %d\n", result);

    pfn = my_add;
    result = pfn(n1, n2);
    printf("result = %d\n", result);

    pfn = my_sub;
    result = pfn(n1, n2);
    printf("result = %d\n", result);

    pfn = my_mul;
    result = pfn(n1, n2);
    printf("result = %d\n", result);

    pfn = my_quotient;
    result = pfn(n1, n2);
    printf("result = %d\n", result);

    return (0);

}

int my_add(int a, int b){
    return a + b;
}

int my_sub(int a, int b){
    return a - b;
}

int my_mul(int a, int b){
     return a * b;
}

int my_quotient(int a, int b){
    return a / b;
}