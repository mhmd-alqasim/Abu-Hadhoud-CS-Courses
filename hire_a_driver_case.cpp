#include <iostream>

using namespace std;

struct stInfo
{
    int Age;
    string Name;
    bool HasDriverlicense;
    bool ishasRecommendation;
};
stInfo readInfo()
{
    stInfo info;
    // cout << "plase Enter Your Name" << endl;
    // cin >> info.Name;
    cout << "plase Enter Your Age" << endl;
    cin >> info.Age;
    cout << "DO you have driver license?" << endl;
    cin >> info.HasDriverlicense;
    cout << "DO you have Recommendation?" << endl;
    cin >> info.ishasRecommendation;

    return info;
};

bool ISAccepted(stInfo info)
{
    if (info.ishasRecommendation)
        return true;
    else
        return (info.Age > 21 && info.HasDriverlicense);
}

void PrintResult(stInfo info)
{
    if (ISAccepted(info))

        cout << "\n Hired" << endl;
    else
        cout << "\n Rejected" << endl;
}

int main()
{

    PrintResult(readInfo());
    return 0;
}