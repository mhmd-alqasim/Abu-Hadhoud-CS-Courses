#include <iostream> // Include iostream for input/output operations.
#include <string>   // Include string for potential future use.

using namespace std;

enum enumOddOrEven
{
    odd = 1,
    even = 2
};

int ReadNumber()
{
    int number;
    cout << "enter number 1---->n : ";
    cin >> number;
    return number;
}
enumOddOrEven check(int N)
{
    enumOddOrEven en;
    if (N % 2 != 0)
        return enumOddOrEven::odd;
    else
        return enumOddOrEven::even;
}
int SumOddNumbersFrom1toN_UsingFor(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (check(i) == enumOddOrEven::odd)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    // Read the upper limit N from the user.
    int N = ReadNumber();

    cout << SumOddNumbersFrom1toN_UsingFor(N) << endl;

    return 0; // Return 0 to indicate successful execution.
}