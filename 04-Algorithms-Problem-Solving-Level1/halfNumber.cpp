#include <iostream>

using namespace std;

int readNumber()
{
    int Num;
    cout << "enter Number for check :";
    cin >> Num;
    return Num;
}

float calculat(int num)
{

    return (float)num / 2;
}

void printResulte(int num)
{
    cout << "half number : " << to_string(num) << " is " << to_string(calculat(num)) << endl;
}

int main()
{
    printResulte(readNumber());
    return 0;
}