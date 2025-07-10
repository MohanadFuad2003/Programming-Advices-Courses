#include <iostream>
#include <cstdlib>

using namespace std;

float ReadNumber() {
    float Number = 0;
    cout << "\nEnter Number : ";
    cin >> Number;
    return Number;
}


gloat MyAbs(gloat number) {
    if (number < 0)
        return number * -1;
    return number;
}


int main() {

    cout << MyAbs(-5);

}