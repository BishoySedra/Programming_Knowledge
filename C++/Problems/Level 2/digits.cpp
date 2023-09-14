#include <iostream>

using namespace std;

void printReversedDigits(int number)
{
    while (number)
    {
        cout << number % 10 << "\n";
        number /= 10;
    }
}

int sumDigits(int number)
{
    int sum = 0;
    while (number)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

void reverseNumber(int &number)
{
    int reversed = 0;

    while (number)
    {
        reversed += number % 10;
        reversed *= 10;
        number /= 10;
    }

    reversed /= 10;

    number = reversed;
}

int countDigit(int number, int digit)
{
    int cnt = 0;
    while (number)
    {
        if (number % 10 == digit)
        {
            cnt++;
        }
        number /= 10;
    }
    return cnt;
}

void printCountAllDigits(int number)
{
    for (int i = 0; i <= 9; i++)
    {
        if (countDigit(number, i))
        {
            cout << "Digit " << i << " Frequency is " << countDigit(number, i) << " Time(s).\n";
        }
    }
}

void printInOrderDigits(int number)
{
    reverseNumber(number);
    printReversedDigits(number);
}

bool isPalindrome(int number)
{
    int temp = number;
    reverseNumber(temp);
    return number == temp;
}

void printInvertedPattern(int number)
{
    for (int i = number; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}

void printReversedInvertedPattern(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}

void printInvertedPatternLetter(int number)
{
    for (int i = number; i >= 1; i--)
    {
        char letter = char(i + 64);
        for (int j = 0; j < i; j++)
        {
            cout << letter;
        }
        cout << "\n";
    }
}

void printReversedInvertedPatternLetter(int number)
{
    for (int i = 1; i <= number; i++)
    {
        char letter = char(i + 64);
        for (int j = 0; j < i; j++)
        {
            cout << letter;
        }
        cout << "\n";
    }
}

void allWordsFromThreeLetters()
{
    int cnt = 0;
    for (int i = 1; i <= 26; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            for (int k = 1; k <= 26; k++)
            {
                cout << char(i + 64) << char(j + 64) << char(k + 64) << "\n";
                cnt++;
            }
        }
    }

    cout << "words count: " << cnt << "\n";
}

int main()
{

    allWordsFromThreeLetters();

    // printReversedInvertedPatternLetter(3);
    // cout << "=====================\n";
    // printReversedInvertedPatternLetter(5);

    // printInvertedPatternLetter(3);
    // cout << "=====================\n";
    // printInvertedPatternLetter(5);

    // cout << int('C') << "\n";

    // printReversedInvertedPattern(3);
    // cout << "=====================\n";
    // printReversedInvertedPattern(5);

    // printInvertedPattern(3);
    // cout << "=====================\n";
    // printInvertedPattern(5);

    // cout << isPalindrome(1234) << "\n";
    // cout << isPalindrome(12321) << "\n";

    // printInOrderDigits(1234);

    // printCountAllDigits(1223222);

    // cout << countDigit(1223222, 2);

    // int number = 1234;
    // reverseNumber(number);
    // cout << number << "\n";

    // cout << sumDigits(1234);

    // printReversedDigits(1234);

    system("pause>0");
    return 0;
}