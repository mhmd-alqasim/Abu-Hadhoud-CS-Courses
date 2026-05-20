#include <iostream> // Include iostream for input/output operations.
#include <string>   // Include string to handle message prompts.

using namespace std;

int ReadPositiveNumber(string text)
{
    int Num;
    do
    {
        cout << text;
        cin >> Num;
    } while (Num < 0);
    return Num;
}

unsigned long long Factorial(int n)

{
    unsigned long long f = 1;
    for (int i = n; i >= 1; i--)
    {
        f = f * i;
        cout << f << endl;
    }
    return f;
}

int main()
{
    cout << Factorial(ReadPositiveNumber("Please enter a positive number???")) << endl;

    return 0;
}