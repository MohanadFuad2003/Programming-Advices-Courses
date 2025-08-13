#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int N = 0;
	cout << "\nEnter Number : ";
	cin >> N;
	return N;
}


void PrintIsPalndromeOrNot(bool Flag, int Number) {
	if (Flag)
		cout << "\nThe (" << Number << ") Is Palindrome Number" << endl;
	else
		cout << "\nThe (" << Number << ") Is Not Palindrome Number" << endl;
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


bool IsPalindromeNumber(int Number1) {
	return Number1 == ReverseNumber(Number1);
}


int main() {
	int Number1 = ReadNumber();
	PrintIsPalndromeOrNot(IsPalindromeNumber(Number1), Number1);
}
