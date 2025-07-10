#include <iostream>
#include <cstdlib>
#include<vector>
using namespace std;

int RandomNumber(int from, int to) {
	int random = rand() % (to - from + 1) + from;
	return random;
}

int ReadNumber() {
	int N = 0;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}

string ReturnWord(int Length) {
	string word = "";
	for (int i = 0; i < Length; i++) {
		word += char(RandomNumber(65, 90));
	}
	return word;
}

vector<string>GenerateKeys(int Number, int length, int lengthSubKey) {
	string key;
	vector<string> store;
	for (int i = 0; i < Number; i++) {
		key = "";
		for (int j = 0; j < length; j++) {
			key += ReturnWord(lengthSubKey);
			key += '-';
		}
		key.pop_back();
		store.push_back(key);
	}
	return store;
}

void PrintKey(vector<string> vector) {
	for (int i = 0; i < vector.size(); i++) {
		cout << "\nKey[" << i + 1 << "]: " << vector.at(i) << endl;
	}
}

int main() {

	PrintKey(GenerateKeys(ReadNumber(), 6, 2));


}