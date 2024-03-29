#include <iostream>

using namespace std;

bool isEquivalentStrings(string s1, string s2, int start_1, int end_1, int start_2, int end_2)
{

    if (start_1 > end_1)
    {
        return true;
    }

    if (start_1 == end_1)
    {
        if (s1[start_1] == s2[end_1])
        {
            return true;
        }
        return false;
    }

    if (s1[start_1] != s2[start_1] && s1[start_1] != s2[end_1] && s1[start_1] != s2[start_2] && s1[start_1] != s2[end_2])
    {
        return false;
    }

    if (s1[end_1] != s2[start_1] && s1[end_1] != s2[end_1] && s1[end_1] != s2[start_2] && s1[end_1] != s2[end_2])
    {
        return false;
    }

    int mid = start_1 + (end_1 - start_1) / 2;

    return isEquivalentStrings(s1, s2, start_1, mid, start_2, mid);
    return isEquivalentStrings(s1, s2, mid + 1, end_1, mid + 1, end_2);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    bool ans = isEquivalentStrings(s1, s2, 0, s1.size() - 1, 0, s2.size() - 1);
    cout << (ans ? "YES" : "NO") << "\n";

    return 0;
}
