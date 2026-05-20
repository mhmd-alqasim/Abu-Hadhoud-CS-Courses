#include <iostream>

using namespace std;

void ReadNumbers(int &number1, int &number2)
{
    cout << "enter number 1 : ";
    cin >> number1;
    cout << "\nenter number 2 :";
    cin >> number2;
}

void SwapTwoNumbers(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void pritnResults(int num1, int num2)
{
    cout << "number 1 " << num1 << endl;
    cout << "number 2 " << num2 << endl;
}

int main()
{
    int number1, number2;
    ReadNumbers(number1, number2);
    pritnResults(number1, number2);
    SwapTwoNumbers(number1, number2);
    pritnResults(number1, number2);

    return 0;
}