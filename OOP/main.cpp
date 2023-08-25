#include <iostream>
#include <string>

#include "Calculator/Calculator.cpp"

using namespace std;

int main()
{
    Calculator c1;

    c1.add(10);
    c1.printResult();

    c1.add(100);
    c1.printResult();

    c1.subtract(100);
    c1.printResult();

    c1.multiply(2);
    c1.printResult();

    c1.divide(2);
    c1.printResult();

    c1.divide(0);
    c1.printResult();

    c1.clear();
    c1.printResult();

    return 0;
}