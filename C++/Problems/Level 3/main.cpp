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

int sumColumn(int arr[][3], int col)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i][col];
    }
    return sum;
}

void printColumnSum(int arr[][3], int col, int sum)
{
    cout << "Column " << col + 1 << " Sum = " << sum << "\n";
}

void sumEachMatrixCol(int arr[][3], int cols)
{
    int sum = 0;
    for (int i = 0; i < cols; i++)
    {
        printColumnSum(arr, i, sumColumn(arr, i));
    }
}

void sumMatrixColsInArray(int arr[][3], int arrSum[], int cols, int &arrSumLength)
{
    int sum = 0;
    for (int i = 0; i < cols; i++)
    {
        arrSum[i] = sumColumn(arr, i);
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

void fillMatrixWithOrderedNumbers(int arr[][3], int rows, int cols)
{
    int cnt = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = cnt;
            cnt++;
        }
    }
}

void transposeMatrix(int arr[][3], int transposedArr[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposedArr[i][j] = arr[j][i];
        }
    }
}

void multiplyTwo3x3Matrices(int arr1[3][3], int arr2[3][3], int resultMatrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultMatrix[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

void printMiddleRow(int arr[][3], int rows, int cols)
{
    int row = rows / 2;
    for (int col = 0; col < cols; ++col)
    {
        cout << arr[row][col] << " ";
    }
    cout << "\n";
}

void printMiddleCol(int arr[][3], int rows, int cols)
{
    int col = cols / 2;
    for (int row = 0; row < rows; ++row)
    {
        cout << arr[row][col] << " ";
    }
    cout << "\n";
}

void sumMatrix(int arr[][3], int rows)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += sumRow(arr, i);
    }
    cout << sum;
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    int arr[3][3];
    fill3x3MatrixWithRandoms(arr, 1, 100);
    printMatrix(arr, 3);
    cout << "-------------------------\n";
    sumMatrix(arr, 3);

    // int arr[3][3];
    // fill3x3MatrixWithRandoms(arr, 1, 100);
    // printMatrix(arr, 3);
    // cout << "----------------------\n";
    // printMiddleRow(arr, 3, 3);
    // cout << "----------------------\n";
    // printMiddleCol(arr, 3, 3);

    // int arr[3][3], arr2[3][3], arr3[3][3];
    // fill3x3MatrixWithRandoms(arr, 1, 100);
    // fill3x3MatrixWithRandoms(arr2, 1, 100);
    // printMatrix(arr, 3);
    // cout << "----------------------\n";
    // printMatrix(arr2, 3);
    // cout << "----------------------\n";
    // multiplyTwo3x3Matrices(arr, arr2, arr3); // not working properly!
    // printMatrix(arr3, 3);

    // int arr[3][3], arr2[3][3];
    // fillMatrixWithOrderedNumbers(arr, 3, 3);
    // printMatrix(arr, 3);
    // cout << "----------------------\n";
    // transposeMatrix(arr, arr2, 3); // not working properly!
    // printMatrix(arr2, 3);

    // int arr[3][3];
    // fillMatrixWithOrderedNumbers(arr, 3, 3);
    // printMatrix(arr, 3);

    // int arr[3][3], arr2[3], arr2Size = 0;
    // fill3x3MatrixWithRandoms(arr, 1, 100);
    // printMatrix(arr, 3);
    // sumMatrixColsInArray(arr, arr2, 3, arr2Size);
    // printArray(arr2, arr2Size);

    // int arr[3][3], arr2[3], arr2Size = 0;
    // fill3x3MatrixWithRandoms(arr, 1, 100);
    // printMatrix(arr, 3);
    // sumEachMatrixCol(arr, 3);

    // int arr[3][3], arr2[3], arr2Size = 0;
    // fill3x3MatrixWithRandoms(arr, 1, 100);
    // printMatrix(arr, 3);
    // sumMatrixRowsInArray(arr, arr2, 3, arr2Size);
    // printArray(arr2, arr2Size);

    // int arr[3][3];
    // fill3x3MatrixWithRandoms(arr, 1, 100);
    // printMatrix(arr, 3);
    // sumEachMatrixRow(arr, 3);

    return 0;
}