#include <iostream>
using namespace std;

/*
input
3
output
ccc
bb
a
*/

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
void InvertedLetterPattern(int number)
{
    for (int i = 65 + number - 1; i >= 65; i--)
    {
        for (int j = 1; j <= number - ((65 + number - 1) - i); j++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    InvertedLetterPattern(ReadPositiveNumber("enter Number"));
    return 0;
}