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

void ReadArrayWithRandomNumber(int arr[100], int& length) {
	cout << "\nEnter Number of Elements : ";
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
	cout << endl;

}


void PrintArray(int arr[100], int Length) {
	cout << "\nArray Elements : ";
	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

}

int ReturnMinNumberInRandomArray(int arr[100], int length) {
	int max = arr[0];
	for (int i = 1; i < length; i++) {
		if (arr[i] < max)
			max = arr[i];
	}
	return max;
}


int main()
{
	srand((unsigned)time(NULL));
	int arr[100], length;
	ReadArrayWithRandomNumber(arr, length);
	PrintArray(arr, length);
	cout << "\nThe Min Number is : " << ReturnMinNumberInRandomArray(arr, length);

}