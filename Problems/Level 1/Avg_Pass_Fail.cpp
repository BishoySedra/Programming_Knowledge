#include <iostream>

using namespace std;

int sumOfThree(int n1, int n2, int n3)
{
    return n1 + n2 + n3;
}

double avgOfThree(int n1, int n2, int n3)
{
    return (double)sumOfThree(n1, n2, n3) / 3;
}

void printNumber(double res)
{
    cout << res << "\n";
}

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
    double avg = avgOfThree(readMark(), readMark(), readMark());
    string status = checkStatus((int)avg);
    if (status == "PASS")
    {
        printNumber(avg);
        printStatus(status);
        return 0;
    }

    printStatus(status);
    system("pause>0");
    return 0;
}