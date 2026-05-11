#include <stdio.h>

// Function to calculate simple interest
float smpInt(float p, float r, float t) 
{
    return (p * r * t) / 100;
}

int main() 
{
        // Input values
    float P = 10000, R = 12, T = 1, SI;

   
    // Call function to calculate simple interest
    SI = smpInt(P, R, T);

    // Display the result
    printf("Simple Interest: %.2f\n", SI);

    return 0;
}