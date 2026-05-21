#include <iostream>
using namespace std;

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
bool isPerfect(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }
    return sum == number;
}
void printResulte(int number)
{
    if (isPerfect(number))
        cout << "number is perfect\n";
}
void perfectNumberFromNToN(int num1, int num2)
{
    for (num1; num1 <= num2; num1++)
    {
        if (isPerfect(num1))
            cout << num1 << "   is perfect" << endl;
    }
}

int main()
{
    int num1 = ReadPositiveNumber("enter number to start :");
    int num2 = ReadPositiveNumber("enter number to end :");

    perfectNumberFromNToN(num1, num2);
    return 0;
}