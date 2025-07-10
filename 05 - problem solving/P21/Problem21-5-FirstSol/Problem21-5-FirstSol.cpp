#include <iostream>
using namespace std;
enum enCharType { CapitalLetter = 1, SmallLetter = 2, SpecialCharacter = 3, Digit = 4 };

int ReadPositiveNumber(string message)
{
	int number;
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);

	return number;
}

int RandomNumber(int from, int to)
{
	int randNumber = rand() % (to - from + 1) + from;
	return randNumber;
}

char GetRandomCharacter(enCharType charType)
{
	switch (charType)
	{
	case enCharType::CapitalLetter:
		return (char)RandomNumber(65, 90);
	case enCharType::SmallLetter:
		return (char)RandomNumber(97, 122);
	case enCharType::SpecialCharacter:
		return (char)RandomNumber(32, 47);
	case enCharType::Digit:
		return RandomNumber(0, 9);
	default:
		cout << "\n Wrong Choice ";
		break;
	}
}

string GenerateWord(int length, enCharType charType)
{
	string word = "";
	for (int i = 0; i < length; i++)
	{
		word += GetRandomCharacter(charType);
	}
	return word;
}

string GenerateKey(int length)
{
	string key = GenerateWord(4, enCharType::CapitalLetter);
	for (int i = 0; i < length - 1; i++)
	{
		key += '-' + GenerateWord(4, enCharType::CapitalLetter);
	}
	return key;
}


void GenerateKeys(int NumberOfKeys, int LengthWord)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "\n Key [ " << i << " ]: " << GenerateKey(LengthWord) << "\n";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	GenerateKeys(ReadPositiveNumber("\n Enter How Many Keys ?  "), 5);

	return 0;
}