#include <iostream>
#include <string>

using namespace std;

string ReadString() {
	string msg = "";
	cout << "Enter Text : ";
	getline(cin, msg);
	return msg;
}


string EncryptionName(string name, short key) {

	for (int i = 0; i < name.size(); i++) {
		name[i] = char((int)name[i] + key);
	}
	return name;
}


string DecryptionName(string name, short key) {

	for (int i = 0; i < name.size(); i++) {
		name[i] = char((int)name[i] - key);
	}
	return name;

}




int main() {
	cout << EncryptionName("A", 2);
	cout << "\n\n" << DecryptionName(EncryptionName("A", 2), 2);
}

