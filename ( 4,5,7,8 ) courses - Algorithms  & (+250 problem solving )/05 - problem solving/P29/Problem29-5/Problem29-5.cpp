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

bool IsPrimeNumber(int Number) {
	for (int i = 2; i <= Number / 2; i++) {
		if (Number % i == 0)
			return false;
	}
	return true;
}

void CopyPrimeNumberAndReturnRealLength(int arr[100], int arrCopy[100], int length, int& Length2)
{
	int index = 0;
	for (int i = 0; i < length; i++) {
		if (IsPrimeNumber(arr[i])) {
			arrCopy[index++] = arr[i];
		}

	}
	if (index == 0)
		index = 1;

	Length2 = index - 1;
}

int main()
{
	srand((unsigned)time(NULL));
	int arr[100], length, arrayCopyPrime[100];
	ReadArray(arr, length);
	cout << "\nArr Elements is : ";
	PrintArray(arr, length);
	int length2 = 0;
	CopyPrimeNumberAndReturnRealLength(arr, arrayCopyPrime, length, length2);
	cout << "\nArray After Copy Prime : ";
	PrintArray(arrayCopyPrime, length2);
	cout << endl << endl;
	cout << length2 << endl;

}