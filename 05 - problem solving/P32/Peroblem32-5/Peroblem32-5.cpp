#include <iostream>
using namespace std;


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

void CopyReverseArray(int arr[100], int arrCopy[100], int length) {
	for (int i = 0; i < length; i++) {
		arrCopy[i] = arr[length - i - 1];
	}


}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100], length, arrCopy[100];
	ReadArray(arr, length);
	cout << "\nArray 1 Elements : ";
	PrintArray(arr, length);
	cout << "\nArray 2 Elements After Copying Array 1 in reverse Order : ";
	CopyReverseArray(arr, arrCopy, length);
	PrintArray(arrCopy, length);
}