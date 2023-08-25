#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>

using namespace std;

class Calculator
{
private:
    int _number;
    int _result;
    int _lastResult;
    std::string _lastOperation;

public:
    Calculator(); // Constructor
    void add(int number);
    void subtract(int number);
    void divide(int number);
    void multiply(int number);
    void clear();
    void printResult();
};

#endif
