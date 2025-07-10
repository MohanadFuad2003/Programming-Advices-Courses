

#include <iostream>
#include<vector>
#include<string> 
#include <sstream>
#include <map>
#include <unordered_set>
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

string RemoveDuplicateWordFromString(string letter) { // very bad algorithm
    vector<string> result = split(letter, ' ');
    string temp;

    for (int i = 0; i < result.size(); i++) {
        temp = result[i];
        for (int j = i + 1; j < result.size(); j++) {
            if (temp == result[j]) {
                result.erase(result.begin() + j);
                j--;
            }
        }
    }

    string finalResult = "";
    for (string word : result) {
        finalResult += word + " ";
    }

    return finalResult;
}


string RemoveDuplicateWordFromStringWithUnorderdSet(string letter) { // best algorithm 
    vector<string> words = split(letter, ' ');
    unordered_set<string> seen;
    string finalResult = "";

    for (const string& word : words) {
        if (seen.find(word) == seen.end()) {
            seen.insert(word);
            finalResult += word + " ";
        }
    }

    return finalResult;
}




int main()
{
    cout << RemoveDuplicateWordFromStringWithUnorderdSet("Ahmad Ahmad Ali Ali Maher tareq hello hello Ahmad hello");
}
