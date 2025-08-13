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




int main() {
	int Number = ReadNumber();
	short Digit = ReadNumber("\nEnter Digit : ");
	printCountNumber(Digit, CountFrequancyDigit(Number, Digit));
}
