#include <iostream>
#include <cmath>

using namespace std;

enum EnNumber
{
    prime = 1,
    notPrime = 2
};
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
void PrintAllPrimeNumbers(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (checkNumber(i) == EnNumber::prime)
            cout << i << endl;
    }
}
int main()
{
    PrintAllPrimeNumbers(ReadPositiveNumber("enter number"));
    return 0;
}