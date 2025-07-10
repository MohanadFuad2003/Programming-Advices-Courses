#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int N = 0;
	cout << "\nEnter Number : ";
	cin >> N;
	return N;
}

void printReverseNumber(short number) {
	cout << "The Number After Reverse it is  : " << number << endl;
}

int ReverseNumber(int Number) {
	int digit = 0;
	int ReverseNumebr = 0;
	while (Number > 0) {
		digit = Number % 10;
		ReverseNumebr = (ReverseNumebr * 10) + digit;
		Number = Number / 10; //
	}
	return ReverseNumebr;
}


int main() {
	printReverseNumber(ReverseNumber(ReadNumber()));
}

