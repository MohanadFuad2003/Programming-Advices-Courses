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

void ReadArray(int arr[100], int arr2[100], int& length) {
	cout << "\nEnter Number of Elements : ";
	cin >> length;
	for (int i = 0; i < length; i++)
	{
		arr[i] = RandomNumber(1, 100);
		arr2[i] = RandomNumber(1, 100);
	}
	cout << endl;
}


void PrintArray(int arr[100], int Length) {

	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

}

void ReturnSumationArray(int arr1[100], int arr2[100], int arr3[100], int length) {
	for (int i = 0; i < length; i++) {
		arr3[i] = arr1[i] + arr2[i];
	}

}

int main()
{
	srand((unsigned)time(NULL));
	int arr1[100], arr2[100], length, arr3[100];
	ReadArray(arr1, arr2, length);
	cout << "\nArr1 Elements is : ";
	PrintArray(arr1, length);
	cout << "\nArr2 Elements is : ";
	PrintArray(arr2, length);

	ReturnSumationArray(arr1, arr2, arr3, length);
	cout << "\nThe Sumantion of arr1 + arr2 is : ";
	PrintArray(arr3, length);
}