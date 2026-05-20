#include <iostream>
#include <cmath>
using namespace std;

enum EnNumber
{
    prime = 1,
    notPrime = 2
};
int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}
EnNumber checkNumber(int Number)
{
    int M = round(Number / 2);
    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
            return EnNumber::notPrime;
    }
    return EnNumber::prime;
}

void PrintNumberType(int Number)
{
    if (checkNumber(Number) == EnNumber::prime)
        cout << "the number is Prime\n";
    else
        cout << "The number is Not Prime\n";
}

int main()
{
    PrintNumberType(ReadPositiveNumber("Enter Number for Chack"));
    return 0;
}