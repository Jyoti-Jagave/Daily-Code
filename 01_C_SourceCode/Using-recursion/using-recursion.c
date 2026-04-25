#include <stdio.h>

int sumofnaturalnumbers(int num)
{
    if (num != 0)
      
        // adding natural numbers up to given number n
        return num + sumofnaturalnumbers(num - 1);
    else
        return num;
}

int main()
{

    int number = 10;
  
    // printing the result
    printf("Sum = %d", sumofnaturalnumbers(number));
  
    return 0;
}