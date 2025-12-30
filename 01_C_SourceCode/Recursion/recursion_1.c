#include <stdio.h>
#include <stdlib.h>

void test_function(void);

int main(void){
    test_function();
    return (0);

}

void test_function(void){
    puts("Hello");
    test_function();
}