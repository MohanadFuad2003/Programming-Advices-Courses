
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int ReadPositiveNumber(string Massage) {
    int Number = 0;
    do {
        cout << Massage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int RandomNumber(int from, int To) {
    int randNum = rand() % (To - from + 1);
    return randNum;
}
void fillArrayWithRandomNumber(int arr[100], int& arrLength) {
    cout << "\nEnter Number of element :\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";

}
int AverageArray(int arr[100], int arrLength) {
    int Average = 0;
    int sum = 0;
    for (int i = 0; i < arrLength; i++) {

        sum += arr[i];
        Average = sum / arrLength;

    }
    return Average;
}
int main() {
    srand((unsigned)time(NULL));
    int arr[100], arrLength;
    fillArrayWithRandomNumber(arr, arrLength);
    cout << "\nArray Element : ";
    PrintArray(arr, arrLength);
    cout << "Average of all Number is:";
    cout << AverageArray(arr, arrLength) << endl;
    return 0;
}