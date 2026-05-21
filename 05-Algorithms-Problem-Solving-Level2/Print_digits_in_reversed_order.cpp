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
void Print_digits_in_reversed_order(int number)
{
    int reminder = 0;
    while (number > 0)
    {
        reminder = number % 10;
        number = number / 10;
        cout << reminder << endl;
    }
}
int SumDigits(int number)
{
    int sum = 0;
    int reminder = 0;
    while (number > 0)
    {
        reminder = number % 10;
        number = number / 10;
        sum += reminder;
    }
    return sum;
}

int PrintReverse(int number)
{
    int reverseNumber = 0;
    int reminder = 0;
    while (number > 0)
    {
        reminder = number % 10;
        number = number / 10;
        reverseNumber = reverseNumber * 10 + reminder;
    }
    return reverseNumber;
}

int main()
{
    int number = ReadPositiveNumber("enter number ");
    Print_digits_in_reversed_order(number);
    cout << "sum digits = " << SumDigits(number) << endl;
    cout << "reverse number " << PrintReverse(number) << endl;
    return 0;
}