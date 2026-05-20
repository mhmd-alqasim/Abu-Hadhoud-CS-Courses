#include <iostream>
#include <cmath>
using namespace std;
void GetNumbers(float &A, float &B)
{
    cout << "enter side A : ";
    cin >> A;
    cout << "\nenter diagonal B :";
    cin >> B;
}
float RectangleAreaBySideAndDiagonal(float a, float b)
{
    float area = a * sqrt(pow(b, 2) - pow(a, 2));
    return area;
}

void printresult(float area)
{
    cout << "area is :" << area << endl;
}
int main()
{
    float A, B;
    GetNumbers(A, B);
    printresult(RectangleAreaBySideAndDiagonal(A, B));
}
