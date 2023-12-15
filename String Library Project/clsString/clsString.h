#pragma once

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class clsString
{
private:
    string _value;

public:
    clsString()
    {
        _value = "";
    }

    clsString(string value)
    {
        _value = value;
    }

    void setValue(string value)
    {
        _value = value;
    }

    string Value()
    {
        return _value;
    }

    static int countWords(string word)
    {
        stringstream x(word);
        string temp;
        int cnt = 0;

        while (getline(x, temp, ' '))
        {
            if (temp != "")
            {
                cnt++;
            }
        }

        return cnt;
    }

    int countWords()
    {
        return countWords(_value);
    }
};