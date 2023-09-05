#pragma once

#include <iostream>

using namespace std;

class Calculator
{
private:
    int _number;
    int _result;
    int _lastResult;
    string _lastOperation;

public:
    Calculator()
        : _number(0), _result(0), _lastResult(0), _lastOperation("") {}

    void add(int number)
    {
        _number = number;
        _lastOperation = "Adding";
        _result += number;
    }

    void subtract(int number)
    {
        _number = number;
        _lastOperation = "Subtracting";
        _result -= number;
    }

    void divide(int number)
    {
        _number = number;
        _lastOperation = "Dividing";
        if (!number)
        {
            return;
        }
        _result /= number;
    }

    void multiply(int number)
    {
        _number = number;
        _lastOperation = "Multiplying";
        _result *= number;
    }

    void clear()
    {
        _lastResult = _result;
        _result = 0;
        _lastOperation = "Clearing";
    }

    void printResult()
    {
        if (_lastOperation == "Clearing")
        {
            cout << "The result after " << _lastOperation << " " << _lastResult << " is " << _result << "\n";
            return;
        }

        if (_lastOperation == "Dividing" && !_number)
        {
            cout << "The result after " << _lastOperation << " " << _number << " is Can't Solve\n";
            return;
        }

        cout << "The result after " << _lastOperation << " " << _number << " is " << _result << "\n";
    }
};