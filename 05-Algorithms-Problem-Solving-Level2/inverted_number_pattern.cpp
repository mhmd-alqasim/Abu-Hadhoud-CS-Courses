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
/*
5
55555  Jiiii
4444   J
333    J
22
1

*/
void inverted_number_pattern(int number)
{
    for (int i = number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
int main()
{
    inverted_number_pattern(ReadPositiveNumber("enter"));
    return 0;
}