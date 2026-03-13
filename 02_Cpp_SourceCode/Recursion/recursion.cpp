#include <iostream>
using namespace std;

void printHello(int n)
{
    // Base Case
    if (n == 0) return;

    cout << "Hello" << endl;

    printHello(n - 1);
}

int main()
{
    printHello(5);
    return 0;
}