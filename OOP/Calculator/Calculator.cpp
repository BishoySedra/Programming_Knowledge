#include "Calculator.h"
#include <iostream>

using namespace std;

Calculator::Calculator()
    : _number(0), _result(0), _lastResult(0), _lastOperation("") {}

void Calculator::add(int number)
{
    _number = number;
    _lastOperation = "Adding";
    _result += number;
}

void Calculator::subtract(int number)
{
    _number = number;
    _lastOperation = "Subtracting";
    _result -= number;
}

void Calculator::divide(int number)
{
    _number = number;
    _lastOperation = "Dividing";
    if (!number)
    {
        return;
    }
    _result /= number;
}

void Calculator::multiply(int number)
{
    _number = number;
    _lastOperation = "Multiplying";
    _result *= number;
}

void Calculator::clear()
{
    _lastResult = _result;
    _result = 0;
    _lastOperation = "Clearing";
}

void Calculator::printResult()
{
    if (_lastOperation == "Clearing")
    {
        std::cout << "The result after " << _lastOperation << " " << _lastResult << " is " << _result << "\n";
        return;
    }

    if (_lastOperation == "Dividing" && !_number)
    {
        std::cout << "The result after " << _lastOperation << " " << _number << " is Can't Solve\n";
        return;
    }

    std::cout << "The result after " << _lastOperation << " " << _number << " is " << _result << "\n";
}
