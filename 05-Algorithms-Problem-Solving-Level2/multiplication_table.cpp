#include <iostream>
using namespace std;

void printHeaderTable()
{

    for (int i = 1; i <= 10; i++)
    {
        cout << "\t" << i;
    }
    cout << "\n______________________________________________________________________________________\n";
}

void PrintmultipicationTable()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i < 10)
        {
            cout << i << "  |";
        }
        else
            cout << i << " |";

        for (int j = 1; j <= 10; j++)
        {
            cout << "\t" << i * j;
        }
        cout << endl;
    }
}
void printAllTable()
{
    printHeaderTable();
    PrintmultipicationTable();
}

int main()
{
    printAllTable();
    return 0;
}