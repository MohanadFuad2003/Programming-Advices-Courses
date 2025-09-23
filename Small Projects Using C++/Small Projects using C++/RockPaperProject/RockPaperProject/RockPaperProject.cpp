#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

enum StonePaperSci { Stone = 1, Paper = 2, Scissors = 3 };

struct info {
	short NumberOfRound = 0;
	short CountPlayerWinner = 0;
	short CountComputerWinner = 0;
	short DrawCount = 0;
	string printWinner = "";
};

void GameOver(info);

struct Player1 {
	short Choose;
	string NameOfChoose;
};

struct Computer {
	short ChooseRandom;
	string NameOfChoose;
};

int ReadRound() {
	int Round;
	cout << "\nHow Many Rounds Need To Play [ 1 to 10 ] : ";
	cin >> Round;
	while (Round > 10 || Round < 1) {
		system("cls");
		cout << "\nEnter Correct Round From  { 1 to 10 } : ";
		cin >> Round;
	}
	return Round;
}

int RandomNumber(int from, int to) {
	int randNumber = rand() % (to - from + 1) + from;
	return randNumber;
}


short ReadPlayerChoose() {
	int Number;
	cin >> Number;
	while (Number > 3 || Number < 0)
	{
		cout << "\nEnter Number from [ 1 to 3 ] Only : ";
		cin >> Number;
	}
	return Number;
}

StonePaperSci ReturnPlayerChoose(StonePaperSci Choose) {
	switch (Choose) {
	case 1: return StonePaperSci::Stone;
	case 2: return StonePaperSci::Paper;
	default: return StonePaperSci::Scissors;
	}
}


void ReadChoosePlayerAndComputer(Player1& Player, Computer& Computer1) {
	Player.Choose = ReadPlayerChoose();
	Computer1.ChooseRandom = RandomNumber(1, 3);
}


bool IsPlayerWin(short ChoosePlayer, short ChooseComputer) {
	if (((ChoosePlayer == StonePaperSci::Stone) && (ChooseComputer == StonePaperSci::Scissors)) || ((ChoosePlayer == StonePaperSci::Paper) && (ChooseComputer == StonePaperSci::Stone)) || ((ChoosePlayer == StonePaperSci::Scissors) && (ChooseComputer == StonePaperSci::Paper)))
		return  true;
	return false;
}

bool IsDraw(short ChoosePlayer, short ChooseComputer) {
	return ChooseComputer == ChoosePlayer;
}

bool IsComputerWin(short ChoosePlayer, short ChooseComputer) {
	return (!(IsPlayerWin(ChoosePlayer, ChooseComputer)));
}

void PrintRoundedBeginsAndChoosingPlayer(short Round) {
	cout << "\n\nRound [" << Round << "] Begins : ";
	cout << "\n\nYour Choice  ,  ( [1] : Stone )  , ([2] : Paper) , ([3] : Sicissors)  ? ";
}

void CountPlayerWinner(info& ForCountPlayer) {
	++ForCountPlayer.CountPlayerWinner;
	ForCountPlayer.printWinner = "[Player Winner]";
}

void CountComputerWinner(info& ForCountComputer) {
	++ForCountComputer.CountComputerWinner;
	ForCountComputer.printWinner = "[Computer Winner]";
}

void CountDraw(info& ForCountDraw) {
	++ForCountDraw.DrawCount;
	ForCountDraw.printWinner = "[No Winner , Draw]";
}

void StoreNameOfChoose(Player1& P1, Computer& C2) {

	switch (StonePaperSci(P1.Choose))
	{
	case StonePaperSci::Stone: P1.NameOfChoose = "Stone"; break;
	case StonePaperSci::Paper: P1.NameOfChoose = "Paper"; break;
	case StonePaperSci::Scissors: P1.NameOfChoose = "Scissors"; break;
	}

	switch (StonePaperSci(C2.ChooseRandom))
	{
	case StonePaperSci::Stone: C2.NameOfChoose = "Stone"; break;
	case StonePaperSci::Paper: C2.NameOfChoose = "Paper"; break;
	case StonePaperSci::Scissors: C2.NameOfChoose = "Scissors"; break;
	}


}

void CheckTheResultOfWinnerOrDraw(Player1& P1, Computer& C2, info& StoreInfo) {
	ReadChoosePlayerAndComputer(P1, C2);
	if (IsDraw(P1.Choose, C2.ChooseRandom)) {
		CountDraw(StoreInfo);
		system("color 6");
	}

	else if (IsPlayerWin(P1.Choose, C2.ChooseRandom))
	{
		CountPlayerWinner(StoreInfo);
		system("color 2");
	}
	else {
		CountComputerWinner(StoreInfo);
		system("color 4");
	}

	StoreNameOfChoose(P1, C2);

}

void PrintResultForEachRoundResult(Player1 P1, Computer C2, info StoreInfo, int Round) {
	StoreNameOfChoose(P1, C2);
	cout << "\n\n_________________________ROUND {" << Round << "}__________________" << endl << endl;
	cout << "--> Player Choice : " << P1.NameOfChoose << endl;
	cout << "--> Computer Choice : " << C2.NameOfChoose << endl;
	cout << "--> Round Winner : " << StoreInfo.printWinner;
	cout << "\n_____________________________________________________" << endl << endl;
}


void PlayGame(info ReturnInfo) {
	Player1 Player;
	Computer Computer1;
	for (int i = 1; i <= ReturnInfo.NumberOfRound; i++) {
		PrintRoundedBeginsAndChoosingPlayer(i);
		CheckTheResultOfWinnerOrDraw(Player, Computer1, ReturnInfo);
		PrintResultForEachRoundResult(Player, Computer1, ReturnInfo, i);
	}
	GameOver(ReturnInfo);
}

string KnowFinalWinner(short Player1Count, short ComputerCount) {
	if (Player1Count == ComputerCount)
		return "{ No Winner }";
	if (Player1Count > ComputerCount)
		return "{ Player1 Winner }";

	return " { Computer Winner } ";
}

void GameOver(info StoreData) {
	cout << "\n\n\t\t\t\t______________________________________________________________________________________________";
	cout << "\n\n\t\t\t\t\t\t\t\t   + + + G A M E O V E R  + + +";
	cout << "\n\n\t\t\t\t______________________________________________________________________________________________";
	cout << "\n\n\n\n\t\t\t\t_______________________________________{ GAME RESULTS }________________________________________";

	cout << "\n\n\t\t\t\t\t\tGame Rounds : " << StoreData.NumberOfRound << endl;
	cout << "\n\t\t\t\t\t\tPlayer1 Won Time(s) : " << StoreData.CountPlayerWinner << endl;
	cout << "\n\t\t\t\t\t\tComputer Won Time(s) : " << StoreData.CountComputerWinner << endl;
	cout << "\n\t\t\t\t\t\tDraw Time(s) : " << StoreData.DrawCount << endl;
	cout << "\n\t\t\t\t\t\tFinal Winner : " << KnowFinalWinner(StoreData.CountPlayerWinner, StoreData.CountComputerWinner) << endl;
	cout << "\n\t\t\t\t_______________________________________________________________________________________________";
}

void RoundNeedToPlay() {
	char ask = 'N';
	info StoreInfo;

	do {
		system("cls");
		StoreInfo.NumberOfRound = ReadRound();
		PlayGame(StoreInfo);
		cout << "\n\n\nDo You Want to Play Again  [Y / N] ? : ";
		cin >> ask;
	} while (toupper(ask) == 'Y');
}

int main() {
	srand((unsigned)time(NULL));

	RoundNeedToPlay();

}