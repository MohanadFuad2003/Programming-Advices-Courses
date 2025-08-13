#include <iostream>
#include <cstdlib>

using namespace std;

float ReadNumber() {
    float Number = 0;
    cout << "\nEnter Number : ";
    cin >> Number;
    return Number;
}

float FractionPart(float Number) {
    return abs(float(Number - (int(Number))));
}
int MyFloor(float Number) {
    if (Number > 0)
        return Number;

    if (FractionPart(Number) > 0.0) {
        return Number - 1;
    }
    return Number;
}
int main() {
    float Number = ReadNumber();
    cout << MyFloor(Number);
}