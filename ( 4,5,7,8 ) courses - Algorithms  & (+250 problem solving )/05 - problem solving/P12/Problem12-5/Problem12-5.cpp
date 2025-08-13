#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {
	int N = 0;
	cout << "\nEnter Number : ";
	cin >> N;
	return N;
}

void PrintPatternNumber(int Number) {
	for (int i = Number; i > 0; i--) {

		for (int j = i; j > 0; j--)
			cout << i;
		cout << endl;
	}
}

int main() {

	PrintPatternNumber(ReadNumber());

}

