#include <iostream>
#include <string>

using namespace std;

enum EnumpassFail
{
    pass = 1,
    fail = 2,
    error = 3
};

int ReadMark()
{
    int Mark;
    cout << "enter Mark for check :";
    cin >> Mark;
    return Mark;
}

EnumpassFail checkMark(int Mark)
{
    if (Mark >= 50 && Mark <= 100)

        return EnumpassFail::pass;

    else if (Mark < 50 && Mark > 0)

        return EnumpassFail ::fail;

    else
        return EnumpassFail ::error;
}

void printResults(int Mark)
{
    if (checkMark(Mark) == EnumpassFail::pass)
        cout << "is pass \n";
    else if (checkMark(Mark) == EnumpassFail::fail)
        cout << "is fail \n";
    else
        cout << "error intput \n";
}

int main()
{
    printResults(ReadMark());
    return 0;
}