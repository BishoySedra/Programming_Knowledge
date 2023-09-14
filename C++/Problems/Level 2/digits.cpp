#include <iostream>
// #include <cstdlib>
// #include <ctime>

using namespace std;

enum numberType
{
    Even = 1,
    Odd = 2

};

numberType even_or_odd(int number)
{
    if (number & 1)
    {
        return numberType::Odd;
    }

    return numberType::Even;
}

int readNumber()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

bool isPrime(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

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

void guessThreeLetterPassword(string password)
{
    int cnt = 0;
    string generated;
    for (int i = 1; i <= 26; i++)
    {
        for (int j = 1; j <= 26; j++)
        {
            for (int k = 1; k <= 26; k++)
            {
                generated += char(i + 64);
                generated += char(j + 64);
                generated += char(k + 64);

                cnt++;

                cout << "Trial[" << cnt << "]: " + generated << "\n";

                if (generated == password)
                {
                    cout << "\nPassword is " << password << "\nFound after " << cnt << " Trial(s)\n";
                    return;
                }

                generated = "";
            }
        }
    }
}

void encryptText(string &text, int key)
{
    for (int i = 0; i < text.size(); i++)
    {
        text[i] = char(int(text[i]) + key);
    }
}

void decryptText(string &text, int key)
{
    for (int i = 0; i < text.size(); i++)
    {
        text[i] = char(int(text[i]) + -key);
    }
}

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

enum type
{
    Capital = 1,
    Small = 2,
    Special = 3,
    Digit = 4
};

char getRandomCharacter(int num)
{
    if (num == type::Capital)
    {
        return char(randomNumber(65, 90));
    }
    else if (num == type::Small)
    {
        return char(randomNumber(97, 122));
    }
    else if (num == type::Special)
    {
        return char(randomNumber(58, 64));
    }
    else
    {
        return char(randomNumber(48, 57));
    }
}

string generateKey(int termLength)
{
    string key, term;

    for (int i = 1; i <= termLength * 4; i++)
    {
        term += getRandomCharacter(1);
        if (term.size() == termLength)
        {
            key += term;
            term = "";
        }

        if (i != termLength * 4 && i % termLength == 0)
        {
            key += "-";
        }
    }

    return key;
}

void printKeys(int times, int termLength)
{
    for (int i = 0; i < times; i++)
    {
        cout << "Key [" << i + 1 << "]: " << generateKey(termLength) << "\n";
    }
}

// filling
void fillArrayWithRandoms(int arr[], int size, int from, int to)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = randomNumber(from, to);
    }
}

void fillArrayFrom1toN(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        arr[i - 1] = i;
    }
}

void fillArrayWithKeys(string arr[], int size, int termLength)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = generateKey(termLength);
    }
}

int fillArrayUntilNo(int arr[])
{
    int index = 0;
    bool isContinued;
    do
    {
        int number = readNumber();
        arr[index] = number;
        index++;
        cout << "Do you want to add more numbers? ";
        cin >> isContinued;

    } while (isContinued);
    return index;
}

// printing
void printStringArray(string arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }
}

void printIntegerArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int maxElement(int arr[], int size)
{
    int mux = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        mux = max(mux, arr[i]);
    }
    return mux;
}

int minElement(int arr[], int size)
{
    int mun = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mun = min(mun, arr[i]);
    }
    return mun;
}

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

double AVGofArray(int arr[], int size)
{
    return (double)sumArray(arr, size) / size;
}

void addArrayElement(int arr[], int number, int &size)
{
    size++;
    arr[size - 1] = number;
};

// copying
void copyArray(int src[], int dest[], int size, int &size2)
{
    for (int i = 0; i < size; i++)
    {
        addArrayElement(dest, src[i], size2);
    }
}

void copyArrayReversed(int src[], int dest[], int size)
{
    for (int i = size - 1, j = 0; i >= 0; i--)
    {
        dest[j] = src[i];
        j++;
    }
}

void copyArrayWithOnlyPrimes(int src[], int dest[], int size)
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (isPrime(src[i]))
        {
            dest[index] = src[i];
            index++;
        }
    }
}

void copyOddNumbersToArray(int src[], int dest[], int size, int &size2)
{
    for (int i = 0; i < size; i++)
    {
        if (even_or_odd(src[i]) == numberType::Odd)
        {
            addArrayElement(dest, src[i], size2);
        }
    }
}

void sumTwoArraysToThird(int src1[], int src2[], int dest[], int size)
{
    for (int i = 0; i < size; i++)
    {
        dest[i] = src1[i] + src2[i];
    }
}

// changing
void shuffleArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        swap(arr[randomNumber(0, size) - 1], arr[randomNumber(0, size) - 1]);
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    int arr1[100], arr2[100], size2 = 0;
    fillArrayWithRandoms(arr1, 10, 1, 100);
    cout << "Array1: ";
    printIntegerArray(arr1, 10);
    copyOddNumbersToArray(arr1, arr2, 10, size2);
    cout << "Array2: ";
    printIntegerArray(arr2, size2);

    // int arr1[100], arr2[100];
    // fillArrayWithRandoms(arr1, 10, 1, 100);
    // cout << "Array1: ";
    // printIntegerArray(arr1, 10);
    // copyArray(arr1, arr2, 10);
    // cout << "Array2: ";
    // printIntegerArray(arr2, 10);

    // int arr[100];
    // printIntegerArray(arr, fillArrayUntilNo(arr));

    // srand(static_cast<unsigned int>(time(nullptr)));

    // string arr[100];
    // fillArrayWithKeys(arr, 5, 4);
    // printStringArray(arr, 5);

    // int arr1[100], arr2[100];
    // fillArrayWithRandoms(arr1, 10, 1, 100);
    // cout << "Array1: ";
    // printIntegerArray(arr1, 10);
    // copyArrayReversed(arr1, arr2, 10);
    // cout << "Array2: ";
    // printIntegerArray(arr2, 10);

    // int arr1[100];
    // fillArrayFrom1toN(arr1, 10);
    // cout << "Array1: ";
    // printArray(arr1, 10);
    // shuffleArray(arr1, 10);
    // cout << "Array1 After Shuffle: ";
    // printArray(arr1, 10);

    // int arr1[100], arr2[100], arr3[100];
    // fillArrayWithRandoms(arr1, 10);
    // fillArrayWithRandoms(arr2, 10);
    // sumTwoArraysToThird(arr1, arr2, arr3, 10);
    // cout << "Array1: ";
    // printArray(arr1, 10);
    // cout << "Array2: ";
    // printArray(arr2, 10);
    // cout << "Array3: ";
    // printArray(arr3, 10);

    // int arr[100], arr2[100];
    // fillArrayWithRandoms(arr, 10);
    // printArray(arr, 10);
    // cout << maxElement(arr, 10) << "\n";
    // cout << minElement(arr, 10) << "\n";
    // cout << sumArray(arr, 10) << "\n";
    // cout << AVGofArray(arr, 10) << "\n";
    // copyArray(arr, arr2, 10);
    // cout << "Array 2: ";
    // printArray(arr2, 10);
    // int newSize = copyArrayWithOnlyPrimes(arr, arr2, 10);
    // cout << "Array 2: ";
    // printArray(arr2, newSize);

    // printKeys(1000, 3);

    // cout << generateKey();

    // getRandomCharacter(2);
    // getRandomCharacter(1);
    // getRandomCharacter(3);
    // getRandomCharacter(4);

    // cout << randomNumber(1, 10) << "\n";
    // cout << randomNumber(1, 10) << "\n";
    // cout << randomNumber(1, 10) << "\n";

    // string text = "Bishoy";
    // int key = 56456;
    // cout << text << "\n";
    // encryptText(text, key);
    // cout << text << "\n";
    // decryptText(text, key);
    // cout << text << "\n";

    // guessThreeLetterPassword("BFB");

    // allWordsFromThreeLetters();

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