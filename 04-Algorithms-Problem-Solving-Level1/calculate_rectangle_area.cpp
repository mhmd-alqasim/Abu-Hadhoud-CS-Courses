#include <iostream>
using namespace std;

void ReadSide(float &a, float &b)
{
    cout << "enter side A : ";
    cin >> a;
    cout << "\nenter side b :";
    cin >> b;
}
float calc_rectangle(float a, float b)
{
    return a * b;
}
void PrintResult(float area)
{
    cout << "the area rectangle is :" << area << endl;
}
int main()
{
    float A, B;
    ReadSide(A, B);
    PrintResult(calc_rectangle(A, B));
    return 0;
}