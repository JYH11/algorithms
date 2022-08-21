#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int ans = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        int j = s[i] - 64;
        if (j < 19)
        {
            if (j % 3 != 0)
                j = j / 3 + 1;
            else
                j /= 3;
        }
        else if (j == 19)
            j = 6;
        else
        {
            if (j < 23)
                j = 7;
            else
                j = 8;
        }
        ans += j + 2;
    }
    cout << ans;
}