#include <iostream>
using namespace std;
// seconds to Day & hours & Minutes &seconds
struct seconds_to_all
{
    int Days, hours, minutes, seconds;
};
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

seconds_to_all ReadTaskDuration()
{
    seconds_to_all TaskDuration;
    TaskDuration.Days = ReadPositiveNumber("Please Enter Number Of Days?");
    TaskDuration.hours = ReadPositiveNumber("Please Enter Number Of Hours?");
    TaskDuration.minutes = ReadPositiveNumber("Please Enter Number Of Minutes?");
    TaskDuration.seconds = ReadPositiveNumber("Please Enter Number Of Seconds?");
    return TaskDuration;
}

int TaskDurationInSeconds(seconds_to_all TaskDuration)
{
    int DurationInSeconds = 0;
    DurationInSeconds = TaskDuration.Days * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.hours * 60 * 60;
    DurationInSeconds += TaskDuration.minutes * 60;
    DurationInSeconds += TaskDuration.seconds;

    return DurationInSeconds;
}

int main()
{

    cout << "\nTask Duration In Seconds:\n " << TaskDurationInSeconds(ReadTaskDuration());
    return 0;
}