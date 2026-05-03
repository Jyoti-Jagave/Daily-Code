#include <math.h>
#include <stdio.h>
#include <stdbool.h>

bool isArmstrong(int N) {
    int temp = N;
    int sum = 0;

    int K = log10(temp) + 1;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, K);
        temp /= 10;
    }

    // Return whether the sum is equal to the original number or not
    return (sum == N);
}

int main() {
    int N = 153;

    // Check if the number is an Armstrong number
    if (isArmstrong(N)) {
        printf("Yes, %d is an Armstrong Number\n", N);
    }
    else {
        printf("No, %d is not an Armstrong Number\n", N);
    }

    return 0;
}