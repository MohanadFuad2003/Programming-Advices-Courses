#include <iostream>
#include <string>

using namespace std;

bool IsPassLike3Letters(string msg, string Letter) {
	return msg._Equal(Letter);
}

void GuessA3LetterPassword(string msg) {

	string Letter = "";
	short count = 1;
	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {
				Letter += char(i);
				Letter += char(j);
				Letter += char(k);
				if (!(IsPassLike3Letters(msg, Letter))) {
					cout << "Trail [" << count++ << "] : " << Letter << endl;
					Letter = "";
				}
				else
				{
					cout << "\n\nPassword is " << msg << endl << "Found After (" << count << ") Trail(s)" << endl;
					return;
				}
			}
		}
		cout << endl << endl;
	}
}

int main() {
	GuessA3LetterPassword("AAF");
}