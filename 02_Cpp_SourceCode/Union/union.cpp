#include <iostream>
using namespace std;

union A
{
    int x;
    char y;
};

union B
{
    int arr[10];
    char y;
};

int main()
{
    // Finding size using sizeof() operator
    cout << "Sizeof A:" << sizeof(A) << endl;
    cout << "Sizeof B:" << sizeof(B) << endl;

    return 0;
}