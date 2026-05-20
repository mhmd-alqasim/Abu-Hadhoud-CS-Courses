#include <iostream>
using namespace std;

float readNumber(string message)
{
    cout << message << endl;
    float Number;
    cin >> Number;
    return Number;
}
float SumNums()
{
    float sum = 0.0;
    float Number = 0.0;
    int counter = 1;
    Number = readNumber("Enter Number " + to_string(counter));
    while (Number != -99)
    {
        sum += Number;

        counter++;
        Number = readNumber("Enter Number " + to_string(counter));
    }
    return (float)sum;
}
int main()
{

    cout << SumNums() << endl;

    return 0;
}