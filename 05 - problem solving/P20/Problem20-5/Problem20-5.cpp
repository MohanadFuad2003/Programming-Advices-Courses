#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int RandomNumber(int from, int to) {

	int random = rand() % (to - from + 1) + from;
	return random;
}

enum EnType { SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4 };

char RandomChar(EnType type) {
	switch (type) {
	case EnType::SmallLetter: {
		return RandomNumber(97, 122);
		break;
	}
	case EnType::CapitalLetter: {
		return RandomNumber(65, 90);
		break;
	}
	case EnType::Digit: {
		return RandomNumber(48, 57);
		break;
	}
	case EnType::SpecialChar: {
		return RandomNumber(33, 47);
		break;
	}
	}
}

int main()
{
	srand((unsigned)time(NULL));


	cout << RandomChar(EnType::SmallLetter) << endl;
	cout << RandomChar(EnType::CapitalLetter) << endl;
	cout << RandomChar(EnType::Digit) << endl;
	cout << RandomChar(EnType::SpecialChar) << endl;
	return 0;
}