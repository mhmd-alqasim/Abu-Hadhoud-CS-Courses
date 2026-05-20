#include <iostream>

using namespace std;

int readNumber()
{
    int number;
    cout << "enter number 1---->n : ";
    cin >> number;
    return number;
}

void print_range_from_n_to_1(int num)
{
    int count = 1;
    do
    {
        cout << count << "  /  ";
        count++;
    } while (count <= num);
}
void print_range_from_n_to_1_for(int num)
{

    for (int count = num; count >= 1; count--)
    {
        cout << count << "  /  ";
    }
}

int main()
{
    int n = readNumber();
    print_range_from_n_to_1_for(n);
    cout << endl;
    return 0;
}