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
float calculateReminder(float totalbill, float totalcashbill)
{
    return totalcashbill - totalbill;
}
void printReinder(float calculateReminder)
{
    cout << "**************************\n";
    cout << "Remainder =" << calculateReminder << endl;
    cout << "**************************\n";
}

int main()
{
    float totalbill = ReadPositiveNumber("please Total Bill :");
    float totalcashbill = ReadPositiveNumber("please Total cash Bill :");

    printReinder(calculateReminder(totalbill, totalcashbill));

    return 0;
}