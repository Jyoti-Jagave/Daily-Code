#include <stdio.h>

int main()
{

    int i, s = 0;
    int n = 10;

    for (i = 0; i <= n; i++) {
      
        s += i;
    }
  
    // printing the result
    printf("Sum = %d", s);
    return 0;
}