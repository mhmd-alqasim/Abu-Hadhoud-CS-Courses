#include <iostream>

using namespace std;

void ReadNumbers(int &number1, int &number2, int &number3)
{
    cout << "enter number 1 : ";
    cin >> number1;
    cout << "\nenter number 2 :";
    cin >> number2;
    cout << "\nenter number 3 :";
    cin >> number3;
}
int MaxOfThreeNumber(int num1, int num2, int num3)
{
    if (num1 > num2)
    {
        if (num1 > num3)
            return num1;
        else
            return num3;
    }
    else
    {
        if (num2 > num3)
            return num2;
        else
            return num3;
    }
}

void pritnResults(int num)
{
    cout << "number Max is " << num << endl;
}

int main()
{
    int number1, number2, number3;
    ReadNumbers(number1, number2, number3);
    pritnResults(MaxOfThreeNumber(number1, number2, number3));
    return 0;
}