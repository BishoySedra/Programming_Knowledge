#include <iostream>

using namespace std;

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void fill3x3MatrixWithRandoms(int arr[][3], int from, int to)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = randomNumber(from, to);
        }
    }
}

void printMatrix(int arr[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int sumRow(int arr[][3], int row)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[row][i];
    }
    return sum;
}

void printRowSum(int arr[][3], int row, int sum)
{
    cout << "Row " << row + 1 << " Sum = " << sum << "\n";
}

void sumEachMatrixRow(int arr[][3], int rows)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        printRowSum(arr, i, sumRow(arr, i));
    }
}

void sumMatrixRowsInArray(int arr[][3], int arrSum[], int rows, int &arrSumLength)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        arrSum[i] = sumRow(arr, i);
        arrSumLength++;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    int arr[3][3], arr2[3], arr2Size = 0;
    fill3x3MatrixWithRandoms(arr, 1, 100);
    printMatrix(arr, 3);
    sumMatrixRowsInArray(arr, arr2, 3, arr2Size);
    printArray(arr2, arr2Size);

    // int arr[3][3];
    // fill3x3MatrixWithRandoms(arr, 1, 100);
    // printMatrix(arr, 3);
    // sumEachMatrixRow(arr, 3);

    return 0;
}