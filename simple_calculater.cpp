#include <iostream>
using namespace std;

enum enOperationType
{
    Add = '+',
    Subtract = '-',
    Multiplt = '*',
    Divide = '/'
};

float readNumber(string message)
{
    cout << message << endl;
    float Num = 0;
    cin >> Num;
    return Num;
}
enOperationType readOpraton(string message)
{
    char op = '+';
    cout << message << endl;
    cin >> op;
    return (enOperationType)op;
}

float calculatFun(float Num1, float Num2, enOperationType op)
{
    switch (op)
    {
    case enOperationType::Add:
        return Num1 + Num2;
    case enOperationType::Subtract:
        return Num1 - Num2;
    case enOperationType::Divide:
        return Num1 / Num2;
    case enOperationType::Multiplt:
        return Num1 * Num2;
    default:
        return Num1 + Num2;
    }
}
int main()
{
    float Number1 = readNumber("Enter Number 1 : ");
    float Number2 = readNumber("Enter Number 2 : ");

    cout << calculatFun(Number1, Number2, readOpraton("enter operation + , - , * , /")) << endl;
    return 0;
}