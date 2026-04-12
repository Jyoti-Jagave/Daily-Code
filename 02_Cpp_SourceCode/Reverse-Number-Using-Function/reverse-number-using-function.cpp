#include<iostream>
using namespace std;
 
int reverseNumber(int num)
{
    int rev = 0;
    while (num != 0)
    {
        int r = num % 10;
        rev = rev * 10 + r;
        num /= 10;
    }
    return rev;
}
 
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int reversedNum = reverseNumber(num);
    cout << "\nThe reverse of " << num << " is : " << reversedNum;
    return 0;
}
