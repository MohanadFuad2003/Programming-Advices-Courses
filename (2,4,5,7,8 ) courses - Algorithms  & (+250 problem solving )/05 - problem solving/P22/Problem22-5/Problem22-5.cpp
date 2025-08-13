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



void ReadArray(int arr[100], int& length) {
	cout << "\nEnter Number of Elements : ";
	cin >> length;

	cout << "\nEnter Array Elemenets";
	for (int i = 0; i < length; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}
	cout << endl;

}


void PrintArray(int arr[100], int Length) {

	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

}

int TimeRepeated(int Number, int arr[100], int length) {
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] == Number)
			count++;
	}
	return count;
}
int main()
{
	int arr[100], length, NumberToCheck;
	ReadArray(arr, length);
	NumberToCheck = ReadPositiveNumber("Enter Number Want to Check : ");
	cout << "\nOriginal Array : ";
	PrintArray(arr, length);
	cout << "\nNumber " << NumberToCheck;
	cout << " Is Repeated : ";
	cout << TimeRepeated(NumberToCheck, arr, length);
}