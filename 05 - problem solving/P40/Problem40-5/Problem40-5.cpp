#include <iostream>
#include <string>
using namespace std;

bool IsNumberInArray(int num, int array[], int& arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        if (num == array[i])
            return true;
    }
    return false;
}

void AddArrayElements(int num, int array[], int& arrayLength)
{
    array[arrayLength] = num;
    arrayLength++;

}

void DistinctNumbers(int arraySource[], int arrayDestination[], int& sourceLength, int& destinationLength) {
    for (int i = 0; i < sourceLength; i++)
    {
        if (!(IsNumberInArray(arraySource[i], arrayDestination, destinationLength)))
            AddArrayElements(arraySource[i], arrayDestination, destinationLength);
    }
}

void PrintArray(int array[], int arrayLength) {
    for (int i = 0; i < arrayLength; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main() {
    int array1[] = { 10, 10, 10, 50, 50, 70, 70, 70, 70, 90 };
    int array1Length = size(array1);
    int array2[100], array2Length = 0;
    DistinctNumbers(array1, array2, array1Length, array2Length);
    cout << "Array 1 Elements: " << endl;
    PrintArray(array1, array1Length);
    cout << "Array 2 Distinct Elements: " << endl;
    PrintArray(array2, array2Length);
}