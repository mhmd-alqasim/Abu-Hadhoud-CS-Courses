#include <iostream> // Include iostream for input/output operations.
#include <string>   // Include string for potential future use.
#include <cmath>

using namespace std;

void readValue(float &A, float &B, float &C)
{
    // Prompt the user to enter the length of the first side (A).
    cout << "Please enter triangle side A ? " << endl;
    cin >> A;

    // Prompt the user to enter the length of the second side (B).
    cout << "Please enter triangle base B ? " << endl;
    cin >> B;

    // Prompt the user to enter the length of the third side (C).
    cout << "Please enter triangle side C ? " << endl;
    cin >> C;
}
float CircleAreaByITriangle(float a, float b, float c)
{
    const float pi = 3.141592654;

    float P = (a + b + c) / 2;
    float x = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
    float area = pi * pow(x, 2);

    return area;
}

void printValue(float A)
{
    cout << "area is :" << A << endl;
}

int main()
{
    float A, B, C;
    readValue(A, B, C);
    printValue(CircleAreaByITriangle(A, B, C));
    return 0;
}