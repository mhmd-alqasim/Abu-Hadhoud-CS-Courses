#include <iostream>
using namespace std;
struct setPiggyBankContent
{
    int pennies, nickels, dimes, quarters, dollars;
};

setPiggyBankContent ReadPiggyBankContent()
{
    setPiggyBankContent PiggyBankContent;
    cout << "Please enter the total number of Pennies: " << endl;
    cin >> PiggyBankContent.pennies;
    cout << "Please enter the total number of Nickels: " << endl;
    cin >> PiggyBankContent.nickels;
    cout << "Please enter the total number of Dimes: " << endl;
    cin >> PiggyBankContent.dimes;
    cout << "Please enter the total number of Quarters: " << endl;
    cin >> PiggyBankContent.quarters;
    cout << "Please enter the total number of Dollar bills: " << endl;
    cin >> PiggyBankContent.dollars;

    return PiggyBankContent;
}
int CalculateTotalPennies(setPiggyBankContent PiggyBankContent)
{
    int totalPennies = 0;
    totalPennies =
        PiggyBankContent.pennies * 1 +
        PiggyBankContent.nickels * 5 +
        PiggyBankContent.dimes * 10 +
        PiggyBankContent.quarters * 25 +
        PiggyBankContent.dollars * 100;

    return totalPennies;
}
float TotalDollars(int totalPennies)
{

    return totalPennies / 100.0f;
}
int main()
{
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
    cout << endl
         << "Total Pennies = " << TotalPennies << endl;

    cout << endl
         << "Total Dollars = $" << TotalDollars(TotalPennies) << endl;

    return 0;
}