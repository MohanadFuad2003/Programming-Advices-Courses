#include <iostream>
#include <cstdlib>

using namespace std;

enum enEvenOdd { Odd = 1, Even = 2 };

short ReadNumInRange(string msg, short from, short to)
{
    short num;

    do
    {
        cout << msg << ' ';
        cin >> num;

    } while (num < from || num > to);

    return num;
}

int GetRandNum(int from, int to)
{
    int randNum = rand() % (to - from + 1) + from;

    return randNum;
}

enEvenOdd CheckEvenOdd(int num)
{
    if (num % 2 == 0)
        return enEvenOdd::Even;

    return enEvenOdd::Odd;
}

void FillArrayWithRandNums(int arr[], short arrLength, int from, int to)
{
    for (short i = 0; i < arrLength; i++)
    {
        arr[i] = GetRandNum(from, to);
    }
}

void PrintArray(int arr[], short arrLength)
{
    for (short i = 0; i < arrLength; i++)
    {
        cout << arr[i] << ' ';
    }

    cout << '\n';
}

short CountEvenOddNums(int arr[], short arrLength, enEvenOdd EvenOdd)
{
    short counter = 0;

    for (short i = 0; i < arrLength; i++)
    {
        if (CheckEvenOdd(arr[i]) == EvenOdd)
            counter++;
    }

    return counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int randNums[100];
    short arrLength = ReadNumInRange("Enter the number of random numbers:", 1, 100);

    FillArrayWithRandNums(randNums, arrLength, 1, 100);

    cout << "\nArray Elements: ";
    PrintArray(randNums, arrLength);

    cout << "Number of even numbers in array: " << CountEvenOddNums(randNums, arrLength, enEvenOdd::Even) << '\n';


    return 0;
}