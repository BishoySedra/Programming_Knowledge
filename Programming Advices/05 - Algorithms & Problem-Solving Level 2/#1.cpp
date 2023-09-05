#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void printTableHeader()
{
    cout << "\t\t\tMultiplication Table from 1 to 10\n";
    cout << "\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n";
    cout << "-----------------------------------------------------------------------------------\n";
}

void tableContent()
{
    for (int i = 1; i <= 10; ++i)
    {
        cout << i << "\t";
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << "\n";
    }
}

int main()
{
    printTableHeader();
    tableContent();
    return 0;
}