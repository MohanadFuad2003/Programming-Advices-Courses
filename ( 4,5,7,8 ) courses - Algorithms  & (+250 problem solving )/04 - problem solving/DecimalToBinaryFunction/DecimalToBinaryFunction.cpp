
 

#include <iostream>
#include<string>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) return "0";
    string binary = "";
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n = n / 2;
    }
    return binary;
}

int main() {
    cout << decimalToBinary(64);
}