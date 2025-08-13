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

void AddArrayElement(int arr[100], int& length, int Number) {
	length++;
	arr[length - 1] = Number;
}

void ReadArray(int arr[100], int& length) {
	length = ReadPositiveNumber("\nEnter Number : ");
	for (int i = 0; i < length; i++) {
		arr[i] = RandomNumber(1, 50);
	}
}

void PrintArray(int arr[100], int Length) {

	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


void CopyArray(int arr1[100], int arr2[100], int Length, int& Length2) {

	for (int i = 0; i < Length; i++) {
		AddArrayElement(arr2, Length2, arr1[i]);
	}
}


int main() {
	srand((unsigned)time(NULL));
	int arr[100], length, arr2[100], length2 = 0;
	ReadArray(arr, length);
	cout << "\n\n\nArray 1 Elements is : ";
	PrintArray(arr, length);
	CopyArray(arr, arr2, length, length2);

	cout << "\nAfter Copy array 2 Elements is  : ";
	PrintArray(arr2, length2);

}