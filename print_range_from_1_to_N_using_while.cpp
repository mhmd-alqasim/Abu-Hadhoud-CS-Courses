#include <iostream>

using namespace std;

int readNumber()
{
    int number;
    cout << "enter number 1---->n : ";
    cin >> number;
    return number;
}

void print_range_from_1_to_N(int num)
{
    int count = 1;
    do
    {
        cout << count << "  /  ";
        count++;
    } while (count <= num);
}
void print_range_from_1_to_N_for(int num)
{

    for (int count = 1; count <= num; count++)
    {
        cout << count << "  /  ";
    }
}

int main()
{
    int n = readNumber();
    print_range_from_1_to_N(n);
    cout << endl;
    print_range_from_1_to_N_for(n);
    return 0;
}