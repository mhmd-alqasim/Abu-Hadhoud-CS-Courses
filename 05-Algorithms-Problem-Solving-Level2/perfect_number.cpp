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
    else
        cout << "number is't perfect\n";
}
int main()
{
    printResulte(ReadPositiveNumber("enter number"));
    return 0;
}