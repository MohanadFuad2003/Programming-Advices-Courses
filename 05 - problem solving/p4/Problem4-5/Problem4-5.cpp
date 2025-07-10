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
	cout << "\n" << Number << " Is Perfect" << endl;
}


void CheckNumberIsPerfectFrom1toN(int Number) {
	for (int i = 6; i <= Number; i++) {
		if (i == SumationDevidedByPerfectNumber(i)) {
			PrintNumber(i);
		}

	}
}

int main() {
	CheckNumberIsPerfectFrom1toN(ReadNumber());

}

