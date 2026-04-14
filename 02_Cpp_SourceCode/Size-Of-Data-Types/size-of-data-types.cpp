#include <iostream>
using namespace std;

int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    // the size of integer type
    cout << "Size of int is: " << sizeof(integerType)
         << "\n";

    // the size of doubleType
    cout << "Size of char is: " << sizeof(charType) << "\n";

    // the size of charType
    cout << "Size of float is: " << sizeof(floatType)
         << "\n";

    // the size of floatType
    cout << "Size of double is: " << sizeof(doubleType)
         << "\n";

    return 0;
}