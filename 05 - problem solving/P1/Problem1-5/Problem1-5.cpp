#include <iostream>
#include <string>
using namespace std;

void PrintNumberFrom1to10() {
	for (int i = 1; i <= 10; i++) {
		cout << "\t" << i << "";
	}
	cout << "\n" << "____________________________________________________________________________________\n";
}

void print() {
	cout << "\n\n\t\t\t\t\tMultiplication Table From 1 to 10\n\n";
	PrintNumberFrom1to10();
}

void printMultiplication(int number) {

	for (int i = 1; i <= 10; i++) {
		cout << number * i << "\t";
	}
}

void printVirtical(int size) {
	print();
	for (int i = 1; i <= 9; i++) {
		cout << " " << i << "   |  ";
		printMultiplication(i);
		cout << endl;
	}


	for (int i = 10; i <= size; i++) {
		cout << "" << i << "   | ";
		printMultiplication(i);
		cout << "\n";

	}
	cout << "\n\n\n\n\n\n\n\n";
}

int main() {
	printVirtical(99);
}
