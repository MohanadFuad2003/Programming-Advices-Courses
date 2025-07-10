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
		arr[i] = RandomNumber(1, 20);
	}
	cout << endl;
}


void PrintArray(int arr[100], int Length) {
	cout << "\nArray 1 Elements is : ";
	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int ReturnIndex(int arr[100], int len, int SearchNumber) {
	for (int i = 0; i < len; i++) {
		if (arr[i] == SearchNumber)
			return i;
	}
	return -1;
}

bool IsNumberInArray(int arr[100], int len, int SearchNumber) {
	return ReturnIndex(arr, len, SearchNumber) >= 0;
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100], length, SearchNumber;
	ReadArray(arr, length);
	PrintArray(arr, length);
	SearchNumber = ReadPositiveNumber("\nEnter Number To Search is : ");
	cout << "\nNumber you Are Looking for is : " << SearchNumber << endl;
	if (!IsNumberInArray(arr, length, SearchNumber))
		cout << "\nNot Found" << endl;
	else
	{
		cout << "\nYes , The Number Is Found :)" << endl;
	}

}