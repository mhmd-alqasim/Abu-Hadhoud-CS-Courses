#include <iostream>
#include <string>

using namespace std;

int ReadAge()
{
    int AGE;
    cout << "Please enter an Age between 18 and 45 ? " << endl;
    cin >> AGE;
    return AGE;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
    return (From <= Number && To >= Number);
}

int ReadUntilAgeBetween(int From, int To)
{
    int age = 0;
    do
    {
        age = ReadAge();
    } while (!ValidateNumberInRange(age, From, To));

    return age;
}

void PrintResult(int Age)
{
    cout << "Your Age is: " << Age << endl;
}

int main()
{
    PrintResult(ReadUntilAgeBetween(18, 45));

    return 0;
}