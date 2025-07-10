#include <iostream>
#include <cstdlib>

using namespace std;

int readPosNum(string msg) {
    int num = 0;
    do {
        cout << msg;
        cin >> num;
        msg = "   Enter Only Positive Numbers: ";
    } while (num < 1);
    return num;
}

void printArr(int arr[100], short arrLng) {
    cout << '[';
    for (short i = 0; i < arrLng; i++) {
        if (i > 0) cout << ',';
        cout << arr[i];
    }
    cout << ']';
}

int genRndNum(const int from, const int to) {
    return rand() % (to - from + 1) + from;
}

void fillArrWithRndNums(int arr[100], const short arrLng) {
    for (short i = 0; i < arrLng; i++)
        arr[i] = genRndNum(-100, 100);
}

short countPosNumsInArr(int arr[100], const short arrLng) {
    short count = 0;
    for (short i = 0; i < arrLng; i++)
        if (arr[i] > 0)
            count++;
    return count;
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    const short arrLng = readPosNum("How many Elements? ");

    fillArrWithRndNums(arr, arrLng);

    cout << "\nYour Array  = ";
    printArr(arr, arrLng);

    cout << "\nYour array has " << countPosNumsInArr(arr, arrLng) << " positive numbers.";

    return 0;
}