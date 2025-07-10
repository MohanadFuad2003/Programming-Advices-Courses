

#include <iostream>
using namespace std;

string RemoveCharacterFromString(string letter, char ch) {
    for (int i = 0; i < letter.size(); i++) {
        if (tolower(letter[i]) == tolower(ch)) {
            letter.erase( letter.begin() + i);
            i--;
        }
    }

    return letter;
}

int main()
{
    cout << RemoveCharacterFromString("Ahmad", 'a');
}