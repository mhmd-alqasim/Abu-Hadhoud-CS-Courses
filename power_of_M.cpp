#include <iostream>
using namespace std;

int readNumber()
{
    int number;
    cout << "enter number  : ";
    cin >> number;
    return number;
}
int readPower()
{
    int Power;
    cout << "enter Power  : ";
    cin >> Power;
    return Power;
}
int Pow_2_3_4(int number, int power)
{
    int R = 1;
    if (power == 0)
        return 1;

    for (int i = 1; i <= power; i++)
    {
        R = number * R;
    }
    return R;
}

int main()
{
    cout << Pow_2_3_4(readNumber(), readPower()) << endl;
    return 0;
}