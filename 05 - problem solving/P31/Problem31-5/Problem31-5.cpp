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
		arr[i] = i + 1;
	}
	cout << endl;
}


void PrintArray(int arr[100], int Length) {

	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void ShuffleArray(int arr[100], int length) {
	for (int i = 0; i < length; i++) {
		swap(arr[RandomNumber(1, length - 1)], arr[RandomNumber(1, length - 1)]);
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100], length;
	ReadArray(arr, length);
	cout << "\nArray Before Shuffle : ";
	PrintArray(arr, length);
	cout << "\nArrayAfter Shuffle : ";
	ShuffleArray(arr, length);
	PrintArray(arr, length);
}