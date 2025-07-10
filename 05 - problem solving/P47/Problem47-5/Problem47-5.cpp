#include <iostream>
#include <cstdlib>

using namespace std;

float ReadNumber() {
    float Number = 0;
    cout << "\nEnter Number : ";
    cin >> Number;
    return Number;
}

float ReturnLeftNumber(float Number) {
    return abs(float(Number - (int(Number))));
}
int MyRound(float Number) {
    float LeftNumber = abs(ReturnLeftNumber(Number));
    cout << "\n\n Left Number ?.() :  (" << LeftNumber << ")" << endl << endl;
    if (LeftNumber >= 0.5)
    {
        if (Number > 0)
            return Number + 1;
        else
            return  Number - 1;
    }
    return Number;
}

int main() {
    float Number = ReadNumber();
    cout << MyRound(Number);
}