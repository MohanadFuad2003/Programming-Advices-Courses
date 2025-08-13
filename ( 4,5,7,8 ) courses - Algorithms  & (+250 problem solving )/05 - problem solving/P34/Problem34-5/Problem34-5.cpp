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


int main()
{
	srand((unsigned)time(NULL));
	int arr[100], length, SearchNumber;
	ReadArray(arr, length);
	PrintArray(arr, length);
	SearchNumber = ReadPositiveNumber("\nEnter Number To Search is : ");
	int Index = ReturnIndex(arr, length, SearchNumber);
	if (Index < 0)
		cout << "\nNot Found" << endl;
	else
	{
		cout << "\nNumber Is Search is is : " << SearchNumber << endl;
		cout << "\nIs Found in Array at Index : " << Index << endl;
		cout << "\nThe Number found in Number Order at : " << Index + 1 << endl;
	}

}