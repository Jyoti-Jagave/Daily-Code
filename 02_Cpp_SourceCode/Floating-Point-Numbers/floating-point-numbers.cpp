#include <iostream>
using namespace std;

// product of these numbers.
float mul_floatnumbers(float a, float b) { return a * b; }

int main()
{
    float A = 1.2, B = 3.0, product;

    // Calling mul_floatnumbers function
    product = mul_floatnumbers(A, B);

    // Printing the output
    cout << product;

    return 0;
}