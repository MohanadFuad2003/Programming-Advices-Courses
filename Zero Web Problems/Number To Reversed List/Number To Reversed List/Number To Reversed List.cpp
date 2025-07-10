
#include <iostream>
#include<vector>
using namespace std;

vector<int> ConvertNumberToList(int number) {

    vector<int> result;
    while (number > 0) {
        result.push_back(number % 10);
        number = number / 10;
    }
    return result;

}

int main()
{
    vector<int> result;
    result = ConvertNumberToList(1234567890);
    for (int i : result) {
        cout << i << " ";
    }
}
