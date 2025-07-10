

#include <iostream>
#include<string>
using namespace std;


string toLowerCase(const string& input) {
    string result = input;
    for (char& c : result) {
        c = tolower(c);
    }
    return result;
}

char FindMissingLetterInString(string letter) {
	string allLettersFrom_A_Z_LowerCase = "abcdefghijklmnopqrstuvwxyz";
    letter = toLowerCase(letter);
    int start = allLettersFrom_A_Z_LowerCase.find(letter[0]);
    if (start == string::npos)
        return ' ';

    char result = ' ';

    for (int i = 0; i < letter.size(); i++) {
        if (letter[i] != allLettersFrom_A_Z_LowerCase[start]) {
            result = allLettersFrom_A_Z_LowerCase[start];
            break;
        }
        start++;
    }


    return result;

}

int main()
{
    cout << FindMissingLetterInString("defghi");
}
