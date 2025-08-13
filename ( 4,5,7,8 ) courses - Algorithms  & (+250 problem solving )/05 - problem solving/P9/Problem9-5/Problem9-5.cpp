#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string s = "Read Number : ") {
	int N = 0;
	cout << s;
	cin >> N;
	return N;
}

void printCountNumber(short Digit, int Counter) {
	if (Counter == 0)
		return;
	cout << "The Digit (" << Digit << " ) Is Frequancy Times :  " << Counter << endl;
}

int CountFrequancyDigit(int Number, int MyDigit) {
	int Count = 0;
	int ReverseNumebr = 0;
	while (Number > 0) {
		if ((Number % 10) == MyDigit)
			++Count;
		Number = Number / 10;
	}
	return Count;
}

void CountAllDigitInNumber(int Number) {
	for (int i = 0; i <= 9; i++) {
		printCountNumber(i, CountFrequancyDigit(Number, i));
	}
}



int main() {
	int Number = ReadNumber();
	CountAllDigitInNumber(Number);
}
