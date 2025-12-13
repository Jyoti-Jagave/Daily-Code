#include <stdio.h>
#include <stdlib.h>

int a[5][3]; //a is array 5 of array 3 of integers 

void print_indexwise_addr(void);

int main(void){
    print_indexwise_addr();
    return (0);
}

void print_indexwise_addr(void){
    int i, j;

    for(i = 0; i < 5; ++i)
    {
        for(j = 0; j < 3; ++j)
        {
            printf("&a[%d][%d]:%llu\n", i, j,
                   (unsigned long long)&a[i][j]
               );
        }
    }
}

/*
    [attnd][marks][sports]
    
    120
    
    a[0],  a[1],  a[2]
    a[3],  a[4],   a[5]
    
    a[27],  a[28],  a[29]
    
    i = 0;
    while(i < 28)
    {
        a[i];
        i = i + 3;
    }

    i = 1;
    while(i < 29)
    {
        a[i];
        i = i + 3;
    }
    
    i = 2;
    while( i < 30)
    {
        a[i];
        i = i + 3;
    }
    
    int student[10][3];

    0->attend, 1->marks, 2->sports

    for(i = 0; i < 10; ++i)
         student[i][1];

*/