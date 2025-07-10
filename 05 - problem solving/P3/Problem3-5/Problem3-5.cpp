#include <iostream>
#include <string>
using namespace std;

int ReadNumber() {
	int N = 0;
	cout << "\nEnter Number : ";
	cin >> N;
	return N;
}

bool IsDevidedNumber(int Number, int nums) {
	return ((Number % nums) == 0);
}

int SumationDevidedByPerfectNumber(int Number) {
	int Sum = 0;
	for (int i = 1; i < Number; i++) {
		if (IsDevidedNumber(Number, i))
			Sum += i;
	}

	return Sum;
}

void PrintNumber(int Number) {
	if (Number == SumationDevidedByPerfectNumber(Number))
		cout << "\n" << Number << " Is Perfect" << endl;
	else
		cout << "\n" << Number << " Is Not Perfect";
}

int main() {
	PrintNumber(ReadNumber());
}

