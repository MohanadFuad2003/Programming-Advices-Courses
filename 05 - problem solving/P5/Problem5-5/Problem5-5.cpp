#include <iostream>
#include <string>
#include <map>
using namespace std;

int ReadNumber() {
	int N = 0;
	cout << "\nEnter Number : ";
	cin >> N;
	return N;
}

void printOneDigit(short number) {
	cout << number << endl;
}

void SeperateNumberToDigits(int Number) {
	short Digit = 0;
	while (Number > 0) {
		Digit = Number % 10;
		Number = Number / 10;
		printOneDigit(Digit);
	}
}


int main() {

	SeperateNumberToDigits(ReadNumber());

}

