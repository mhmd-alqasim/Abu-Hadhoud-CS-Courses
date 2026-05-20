#include <iostream>
using namespace std;

int readNumber()
{
    int number;
    cout << "enter number  : ";
    cin >> number;
    return number;
}
void Pow_2_3_4(int number)
{
    int p2 = number * number;
    int p3 = number * number * number;
    int p4 = number * number * number * number;
    cout << "p2 = " << p2 << "\np3 = " << p3 << "\np4 = " << p4 << endl;
}

int main()
{
    Pow_2_3_4(readNumber());
    return 0;
}