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
// 55956
// 3
int DigitFrequency(int number, int numberTarget)
{
    int Frequency = 0;
    int reminder = 0;
    while (number > 0)
    {
        reminder = number % 10;
        number = number / 10;
        if (reminder == numberTarget)
        {
            Frequency++;
        }
    }
    return Frequency;
}
// 55956
// 3
void FrequencyForAllDigits(int Number)
{

    for (int i = 0; i < 10; i++)
    {
        int Digitfreq = 0;
        Digitfreq = DigitFrequency(Number, i);
        if (Digitfreq > 0)
        {
            cout << "Digit " << i << " Frequencey is " << Digitfreq << " Time(s).\n";
        }
    }
}
int main()
{
    int number = ReadPositiveNumber("enter number ");
    Print_digits_in_reversed_order(number);
    cout << "sum digits = " << SumDigits(number) << endl;
    cout << "reverse number " << PrintReverse(number) << endl;
    Print_digits_in_reversed_order(PrintReverse(number));

    cout << DigitFrequency(number, ReadPositiveNumber("Please enter one digit to check")) << endl;
    FrequencyForAllDigits(number);
    return 0;
}