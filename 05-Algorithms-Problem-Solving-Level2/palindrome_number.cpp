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
// 1234
// 1234321
int PrintReverse(int number)
{

    int reverseNumber = 0;
    int reminder = 1;
    while (number > 0)
    {
        reminder = number % 10;
        number = number / 10;
        reverseNumber = reverseNumber * 10 + reminder;
    }
    return reverseNumber;
}
bool IsPalindrome(int number)
{
    return number == PrintReverse(number);
}
int main()
{
    if (IsPalindrome(ReadPositiveNumber("enter number? ")))
        cout << "Yes is palindrome \n";
    else
        cout << "No isn't palindrome \n";
    return 0;
}