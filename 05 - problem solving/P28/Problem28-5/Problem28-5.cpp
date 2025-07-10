#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
	int number;
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);

	return number;
}

int RandomNumber(int from, int to)
{
	int randNumber = rand() % (to - from + 1) + from;
	return randNumber;
}

void ReadArray(int arr[100], int& length) {
	cout << "\nEnter Number of Elements : ";
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
	cout << endl;

}


void PrintArray(int arr[100], int Length) {

	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

}

void CopyArray(int arr[100], int CopyArray[100], int length) {

	for (int i = 0; i < length; i++)
		CopyArray[i] = arr[i];
}


int main()
{
	srand((unsigned)time(NULL));
	int arr[100], CopyArr[100], length;

	ReadArray(arr, length);
	cout << "\nArray 1 Elements : ";
	PrintArray(arr, length);
	CopyArray(arr, CopyArr, length);
	cout << "\nArray 2 Elements After Copy From 1 Elements: ";
	PrintArray(CopyArr, length);
}