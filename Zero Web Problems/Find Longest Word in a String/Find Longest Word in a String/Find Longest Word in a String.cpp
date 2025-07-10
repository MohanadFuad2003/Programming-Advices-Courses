

#include <iostream>

#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> split(const string& input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string item;

    while (getline(ss, item, delimiter)) {
        result.push_back(item);
    }
    return result;
}

vector<string> FindLongestWordInString(string letter) {
    vector<string> letterAfterSplit = split(letter, ' ');
    if (letterAfterSplit.empty()) return {};
    int maxLength = letterAfterSplit[0].length();
    for (int i = 0; i < letterAfterSplit.size(); i++) {
        if (maxLength <= letterAfterSplit[i].length()) {
            maxLength = letterAfterSplit[i].length();
        }
    }
    vector<string> result;
    for (int k = 0; k < letterAfterSplit.size(); k++) {
        if (maxLength == letterAfterSplit[k].length()) {
            result.push_back(letterAfterSplit[k]);
        }
    }
    return result;
}

int main()
{
    

}
