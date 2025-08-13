#include <iostream>
using namespace std;

int ReadPositiveNumber(string message = "") {
	int number;
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);
	return number;
}

void ReadArray(int arr[], int length) {

	cout << "\nEnter Elements  For Array : ";
	for (int i = 0; i < length; i++) {
		arr[i] = ReadPositiveNumber();
	}
}

void PrintArray(int arr[100], int Length) {
	for (int i = 0; i < Length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


bool IsPalindromeArray(int arr[], int Len) {
	int l = 0, r = Len - 1;
	while (l < r) {
		if (arr[l] != arr[r])
			return false;
		l++; r--;
	}
	return true;
}

int main() {

	int arr[6];
	int const length = 6;
	ReadArray(arr, length);
	cout << "\nElements in array : ";
	PrintArray(arr, length);
	if (IsPalindromeArray(arr, length))
		cout << "\nArray is Palindrome ." << endl;
	else
		cout << "\nArray is Not Palindrome (--:" << endl;
}