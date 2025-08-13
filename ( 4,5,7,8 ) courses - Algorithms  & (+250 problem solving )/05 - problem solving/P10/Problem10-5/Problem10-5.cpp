#include <iostream>
#include <string>
using namespace std;
int ReadNumber() {
	int N = 0;
	cout << "\nEnter Number : ";
	cin >> N;
	return N;
}

void printDigitReverserNumber(short number) {
	cout << number << endl;
}

int ReverseNumber(int Number) {
	int digit = 0;
	int ReverseNumebr = 0;
	while (Number > 0) {
		digit = Number % 10;
		ReverseNumebr = (ReverseNumebr * 10) + digit;
		Number = Number / 10;
	}
	return ReverseNumebr;
}

void SeperateDigitNumber(int Number) {
	int digit = 0;
	int Reverser = ReverseNumber(Number);
	while (Reverser > 0) {
		digit = Reverser % 10;
		printDigitReverserNumber(digit);
		Reverser = Reverser / 10;
	}
}

int main() {
	SeperateDigitNumber(ReadNumber());
}