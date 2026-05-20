#include <iostream>
using namespace std;

void PrintAtoZ()
{
    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << "_" << char(i + 32) << endl;
    }
}
int main()
{
    PrintAtoZ();
    return 0;
}