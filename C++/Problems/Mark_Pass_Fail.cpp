#include <iostream>

using namespace std;

int readMark()
{
    int mark;
    cout << "Enter Your Mark: ";
    cin >> mark;
    return mark;
}

void checkStatus(int mark)
{
    cout << ((mark >= 50) ? "PASS\n" : "Fail\n");
}

int main()
{
    checkStatus(readMark());
    system("pause>0");
    return 0;
}