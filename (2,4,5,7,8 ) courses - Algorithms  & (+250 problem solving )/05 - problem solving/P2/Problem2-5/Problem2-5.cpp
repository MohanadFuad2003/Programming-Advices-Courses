#include <iostream>
#include <string>
using namespace std;

int ReadNumber() {
	int N = 0;
	cout << "\nEnter Number : ";
	cin >> N;
	return N;
}


bool IsPrimeNumber(int Number) {

	for (int i = 2; i <= Number / 2; i++) {
		if (Number % i == 0)
			return false;
	}
	return true;
}

void PrintPrimeNumber(int N) {
	for (int i = 1; i <= N; i++) {
		if (IsPrimeNumber(i))
			cout << i << endl;
	}
}

int main() {
	PrintPrimeNumber(ReadNumber());
}


