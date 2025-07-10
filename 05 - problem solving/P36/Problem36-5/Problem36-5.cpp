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

bool IsNeedToAddNumber() {
	bool Flag;
	cout << "\n\n Do You Want To Add More Numbers ? [0] No , [1] Yes  ? ";
	cin >> Flag;
	return Flag;
}

void ReadArray(int arr[100], int& length) {

	length = 1;
	bool Flag = false;
	for (int i = 0; i < 100; i++) {
		cout << "\n\nPlease Enter a Number ? ";
		cin >> arr[i];
		if (IsNeedToAddNumber())
			length++;
		else
			break;
	}
}

void PrintArray(int arr[100], int Length) {

	cout << "\nLength  = " << Length << endl;
	cout << "\n\n\nArray Elements is : ";
	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{

	int arr[100], length;
	ReadArray(arr, length);
	PrintArray(arr, length);

}