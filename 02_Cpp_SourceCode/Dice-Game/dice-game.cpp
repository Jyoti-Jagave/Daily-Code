#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int dice;

    // random number generator start
    srand(time(0));

    cout<<"Dice Game"<<endl;
    cout<<"Press Enter to roll the dice..";
    cin.get();

    dice = (rand() % 6) + 1;

    cout << "Dice Number:"<<dice<<endl;

    return 0;
}