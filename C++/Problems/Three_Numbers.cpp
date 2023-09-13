#include <iostream>

using namespace std;

int readNumber()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n;
}

int sumOfThree(int n1, int n2, int n3)
{
    return (n1 + n2 + n3); // This is the same as below.
}

void print(int res)
{
    cout << res << "\n";
}

int avgOfThree(int sum)
{
    return sum / 3;
}

int readMark()
{
    int mark;
    cout << "Enter Your Mark: ";
    cin >> mark;
    return mark;
}

string checkStatus(int mark)
{
    return ((mark >= 50) ? "PASS\n" : "Fail\n");
}

int main()
{
    // print(sumOfThree(readNumber(), readNumber(), readNumber()));
    // print(avgOfThree((double)sumOfThree(readNumber(), readNumber(), readNumber())));

    int avg = avgOfThree(sumOfThree(readMark(), readMark(), readMark()));
    if (checkStatus(avg) == "PASS")
    {
        print(avg);
    }
    cout << checkStatus(avg);
    system("pause>0");
    return 0;
}