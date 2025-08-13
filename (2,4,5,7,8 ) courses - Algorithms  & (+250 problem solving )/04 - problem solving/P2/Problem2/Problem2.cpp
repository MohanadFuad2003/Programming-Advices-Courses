

#include <iostream>
using namespace std;

enum EnOddOrEeven {Odd = 1 , Even = 2};

EnOddOrEeven IsNumberEvenOrOdd(int Number) {
	if (Number % EnOddOrEeven::Even == 0)
		return EnOddOrEeven::Even;
	EnOddOrEeven::Odd;		
}

int ReadNumber() {
	cout << "\nEnter Integer Number : ";
	int Number = 0;
	cin >> Number;
	return Number;
}

void PrintResult() {
	int const Number = ReadNumber();
	EnOddOrEeven temp = IsNumberEvenOrOdd(Number);
	if (temp == EnOddOrEeven::Even)
		cout << "\nNumber [" << Number << "] Is Even ." << endl;
	else
		cout << "\nNumber [" << Number << "] Is Odd ." << endl;

}

int main() {	
	PrintResult();
}

