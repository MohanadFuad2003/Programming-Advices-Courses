#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int N = 0;
	cout << "\nEnter Number : ";
	cin >> N;
	return N;
}

void printSumationDigits(short number) {
	cout << "The Digit After Sumation is  : " << number << endl;
}

int SeperateNumberToDigitsForSumationAllDigits(int Number) {
	short Digit = 0;
	int sum = 0;
	while (Number > 0) {
		Digit = Number % 10;
		Number = Number / 10;
		sum += Digit;
	}
	return sum;
}

int main() {
	printSumationDigits(SeperateNumberToDigitsForSumationAllDigits(ReadNumber()));
}


