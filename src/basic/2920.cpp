#include <iostream>
using namespace std;

int main()
{
    int nArr[8] = {
        0,
    };
    int asCount = 0, desCount = 0;

    for (int i = 0; i < 8; i++)
    {
        cin >> nArr[i];
    }

    for (int i = 0; i < 7; i++)
    {
        if (nArr[i] < nArr[i + 1])
            asCount++;
        else
            desCount++;
    }

    if (asCount == 7)
        cout << "ascending";
    else if (desCount == 7)
        cout << "descending";
    else
        cout << "mixed";

    return 0;
}