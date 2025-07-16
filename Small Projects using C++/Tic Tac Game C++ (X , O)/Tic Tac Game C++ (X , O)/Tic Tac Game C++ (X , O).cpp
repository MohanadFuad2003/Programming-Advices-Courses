#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <set>
#include <windows.h>
using namespace std;

void SetColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int ReadNumberForPlayer(set<int>& store) {
    cout << "\nChoose From These Numbers to fill in the matrix { ";
    for (int num : store) {
        cout << num << " ";
    }
    cout << "}: ";

    int readerNumber = 0;
    cin >> readerNumber;
    while (store.find(readerNumber) == store.end()) {
        cout << "\nYour number was already chosen or invalid. Please choose from the numbers shown above.\nChoose number: ";
        cin >> readerNumber;
    }
    store.erase(readerNumber);
    return readerNumber;
}

int ReadComputer(set<int>& store) {
    vector<int> choices(store.begin(), store.end());
    int index = rand() % choices.size();
    int number = choices[index];
    store.erase(number);
    return number;
}

void printMatrix(string matrix[3][3]) {
    system("cls");
    cout << "\n";
    for (int i = 0; i < 3; ++i) {
        cout << " ";
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] == "X") {
                SetColor(12);
                cout << " " << matrix[i][j] << " ";
                SetColor(7);
            }
            else if (matrix[i][j] == "O") {
                SetColor(9);
                cout << " " << matrix[i][j] << " ";
                SetColor(7);
            }
            else {
                cout << " " << matrix[i][j] << " ";
            }
            if (j < 2) cout << " ";
        }
        cout << "\n";
        if (i < 2) {
            cout << " ";
            for (int j = 0; j < 3; ++j) {
                cout << "---";
                if (j < 2) cout << "+";
            }
            cout << "\n";
        }
    }
    cout << "\n";
}

bool isXWin(string matrix[3][3]) {
    if (matrix[0][0] == "X" && matrix[0][1] == "X" && matrix[0][2] == "X") return true;
    if (matrix[1][0] == "X" && matrix[1][1] == "X" && matrix[1][2] == "X") return true;
    if (matrix[2][0] == "X" && matrix[2][1] == "X" && matrix[2][2] == "X") return true;
    if (matrix[0][0] == "X" && matrix[1][0] == "X" && matrix[2][0] == "X") return true;
    if (matrix[0][1] == "X" && matrix[1][1] == "X" && matrix[2][1] == "X") return true;
    if (matrix[0][2] == "X" && matrix[1][2] == "X" && matrix[2][2] == "X") return true;
    if (matrix[0][0] == "X" && matrix[1][1] == "X" && matrix[2][2] == "X") return true;
    if (matrix[0][2] == "X" && matrix[1][1] == "X" && matrix[2][0] == "X") return true;
    return false;
}

bool isOWin(string matrix[3][3]) {
    if (matrix[0][0] == "O" && matrix[0][1] == "O" && matrix[0][2] == "O") return true;
    if (matrix[1][0] == "O" && matrix[1][1] == "O" && matrix[1][2] == "O") return true;
    if (matrix[2][0] == "O" && matrix[2][1] == "O" && matrix[2][2] == "O") return true;
    if (matrix[0][0] == "O" && matrix[1][0] == "O" && matrix[2][0] == "O") return true;
    if (matrix[0][1] == "O" && matrix[1][1] == "O" && matrix[2][1] == "O") return true;
    if (matrix[0][2] == "O" && matrix[1][2] == "O" && matrix[2][2] == "O") return true;
    if (matrix[0][0] == "O" && matrix[1][1] == "O" && matrix[2][2] == "O") return true;
    if (matrix[0][2] == "O" && matrix[1][1] == "O" && matrix[2][0] == "O") return true;
    return false;
}

void FillXInMatrix(string matrix[3][3], int PlayerChoose) {
    bool flag = false;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (to_string(PlayerChoose) == matrix[i][j]) {
                matrix[i][j] = "X";
                flag = true;
                break;
            }
        }
        if (flag) break;
    }
}

void FillOInMatrix(string matrix[3][3], int ComputerChoose) {
    bool flag = false;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (to_string(ComputerChoose) == matrix[i][j]) {
                matrix[i][j] = "O";
                flag = true;
                break;
            }
        }
        if (flag) break;
    }
}

bool playAgainPrompt() {
    cout << "\nDo you want to play again? (Y/N): ";
    char ch;
    cin >> ch;
    return (ch == 'Y' || ch == 'y');
}

void StartPlayGame(set<int>& store, string matrix[3][3]) {
    printMatrix(matrix);
    int counter = 0;

    while (true) {
        int player = ReadNumberForPlayer(store);
        FillXInMatrix(matrix, player);
        counter++;
        printMatrix(matrix);

        if (counter >= 5 && isXWin(matrix)) {
            SetColor(12);
            cout << "\n🎉 Congratulations! Player (X) Wins! 🎉\n";
            SetColor(7);
            return;
        }

        if (store.empty()) {
            cout << "\nIt's a Draw! Nobody wins.\n";
            return;
        }

        int computer = ReadComputer(store);
        FillOInMatrix(matrix, computer);
        counter++;
        printMatrix(matrix);

        if (counter >= 5 && isOWin(matrix)) {
            SetColor(9);
            cout << "\n😞 Computer (O) Wins! Better luck next time.\n";
            SetColor(7);
            return;
        }

        if (store.empty()) {
            cout << "\nIt's a Draw! Nobody wins.\n";
            return;
        }
    }
}

void PlayTicTac() {
    cout << "==============================\n";
    cout << "    Welcome to Tic Tac Toe!   \n";
    cout << "==============================\n";
    cout << "Instructions:\n";
    cout << "- You are X, Computer is O.\n";
    cout << "- Choose a number from the available ones to mark your move.\n";
    cout << "- First to get 3 in a row (horizontal, vertical, diagonal) wins.\n";
    cout << "- Have fun!\n\n";

    do {
        string matrix[3][3] = { {"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"} };
        set<int> store = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        StartPlayGame(store, matrix);
    } while (playAgainPrompt());

    cout << "\nThanks for playing Tic Tac Toe! Goodbye.\n";
}

int main() {
    srand(time(0));
    PlayTicTac();
    return 0;
}
