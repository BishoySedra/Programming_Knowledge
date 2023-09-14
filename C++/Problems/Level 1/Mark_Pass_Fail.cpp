#include <iostream>

using namespace std;

int readMark()
{
    int number;
    cout << "Enter a mark: ";
    cin >> number;
    return number;
}

string checkStatus(int mark)
{
    if (mark >= 50)
    {
        return "PASS";
    }

    return "Fail";
}

void printStatus(string status)
{
    cout << status + "\n";
}

int main()
{
    printStatus(checkStatus(readMark()));
    system("pause>0");
    return 0;
}