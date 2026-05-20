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
float HoursToDay(float NumberOfHours)
{
    return (float)NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{
    return (float)NumberOfHours / (24 * 7); // Convert hours to weeks.
}
float DaytoWeek(float NumberOfDay)
{
    return (float)NumberOfDay / 7;
}

int main()
{
    float NumberOfHours = ReadPositiveNumber("Entre Number Of Hours");
    float NumberOfDays = HoursToDay(NumberOfHours);
    float NumberOfWeeks = DaytoWeek(NumberOfDays);
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << NumberOfDays << endl;
    cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;
    return 0;
}
//