#include <iostream>

using namespace std;

enum enNumber
{
    odd = 1,
    even = 2
};

int readNumber()
{
    int Num;
    cout << "enter Number for check :";
    cin >> Num;
    return Num;
}
enNumber checkNumber(int num)
{
    int result = num % 2;
    cout << result;
    if (result == 0)
        return enNumber::even;
    else
        return enNumber::odd;
}
void NumberType(enNumber numberType)
{
    if (numberType == enNumber::even)
    {
        cout << "number is even " << endl;
    }
    else
        cout << "number is odd\n";
}
int main()
{
    cout << "Hello World!" << endl;
    NumberType(checkNumber(readNumber()));
    return 0;
}