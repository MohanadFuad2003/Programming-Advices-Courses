#include <iostream>
#include <cstdlib>
#include <string>
#include <thread> 
#include <chrono>  
using namespace std;


enum QustionLevel { Easy = 1, Mid = 2, Hard = 3, Mix = 4 };
enum OperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, Miix = 5 };

struct InfoFinalResult {
	short CountNumberOfQustion = 0;
	short CountNumberOfRightAnswer = 0;
	short CountNumberOfWongAnswer = 0;
	string QustionLevel;
	string OperationTypeLevel;
};

struct Player {
	short ChooseQustionLevel;
	short ChooseOperationType;
	int YourResult;
};

void ShowInformationAfterEndGame(InfoFinalResult Res);


int RandomNumber(int from, int to) {
	int randNumber = rand() % (to - from + 1) + from;
	return randNumber;
}

short ReadQustionTypeLevel() {
	int Level = 0;
	cin >> Level;
	while (Level < 1 || Level > 4) {
		cout << "\nEnter Qustion Level From {1 --> 4 } : ";
		this_thread::sleep_for(chrono::seconds(3));
		std::cout << "\r" << std::string(40, ' ') << "\r" << std::flush;
		cin >> Level;
	}
	return Level;
}

short ReadOperationTypeLevel() {
	int Level = 0;
	cin >> Level;
	while (Level < 1 || Level > 5) {
		cout << "\nEnter Opeartion Level From {1 --> 5 } : ";
		this_thread::sleep_for(chrono::seconds(3));
		std::cout << "\r" << std::string(40, ' ') << "\r" << std::flush;
		cin >> Level;
	}
	return Level;
}

int ReadNumberOfQustions() {
	int NumberOfQuestion;
	cout << "\nHow Many Questions Need To Answer : ";
	cin >> NumberOfQuestion;
	while (NumberOfQuestion < 1) {
		cout << "\nEnter Correct Number Of Questions Upper Than {0} : ";
		this_thread::sleep_for(chrono::seconds(2));
		system("cls");
		cout << "\nHow Many Questions Need To Answer : ";
		cin >> NumberOfQuestion;
	}
	return NumberOfQuestion;
}

void ToKnowLevelQuestion(InfoFinalResult& Res, int Level) {
	switch (QustionLevel(Level))
	{
	case Easy: Res.QustionLevel = "EASY";
		break;
	case Mid: Res.QustionLevel = "MID";
		break;
	case Hard: Res.QustionLevel = "HARD";
		break;
	case Mix:Res.QustionLevel = "MIX";
		break;
	}
}

void ToKnowOperationTypeLevel(InfoFinalResult& Res, int OpType) {
	switch (OperationType(OpType))
	{
	case Add: Res.OperationTypeLevel = "( + )";
		break;
	case Sub: Res.OperationTypeLevel = "( - )";
		break;
	case Mul: Res.OperationTypeLevel = "( * )";
		break;
	case Div: Res.OperationTypeLevel = "( / )";
		break;
	case Miix:  Res.OperationTypeLevel = "( Mix Operation )";
		break;
	}
}

void PrintAndReadQustionLevelAndTypeOperation(Player& P1, InfoFinalResult& Res) {
	cout << "\nEnter Questions Level [1] EASY , [2] MID , [3] HARD , [4] MIX ? ";
	P1.ChooseQustionLevel = ReadQustionTypeLevel();
	cout << "\nEnter Operation Type [1] ADD , [2] SUB  , [3] MUL , [4] DIV , [5] MIX ? ";
	P1.ChooseOperationType = ReadOperationTypeLevel();
	ToKnowLevelQuestion(Res, P1.ChooseQustionLevel);
	ToKnowOperationTypeLevel(Res, P1.ChooseOperationType);
}

int ReturnTheNumberAccordingToLevelQuestion(int Level) {
	while (true) {
		switch (QustionLevel(Level))
		{
		case Easy: return RandomNumber(1, 10);
			break;
		case Mid: return RandomNumber(15, 30);
			break;
		case Hard: return RandomNumber(50, 100);
			break;
		case Mix: Level = RandomNumber(1, 3);
		}
	}
}



int ShowOperationTypeToDoCalculate2NumbersAndReturnCorrectAnswer(int Number1, int Number2, int Operation) {
	while (true) {
		switch (OperationType(Operation))
		{
		case Add:cout << "\n" << Number1 << "+" << Number2 << " = ";

			return Number1 + Number2;
			break;
		case Sub: cout << "\n" << Number1 << "-" << Number2 << " = ";
			return Number1 - Number2;
			break;
		case Mul: cout << "\n" << Number1 << "*" << Number2 << " = ";
			return Number1 * Number2;
			break;
		case Div: cout << "\n" << Number1 << "/" << Number2 << " = ";
			return Number1 / Number2;
			break;
		case Miix:Operation = RandomNumber(1, 4);
		}
	}
}

int ReadYourAnswer() {
	int Answer = 0;
	cin >> Answer;
	return Answer;
}

bool IsThiMathmaticalCalculationEqualYourAnswer(int ResultCorrectCalculate) {
	int Answer = ReadYourAnswer();
	return Answer == ResultCorrectCalculate;
}

void CountCoorectAnswerAndPrintRightAnswer(InfoFinalResult& Res) {
	cout << "\n___________________";
	cout << "\nRight Answer :)";
	cout << "\n___________________" << endl << endl;
	Res.CountNumberOfRightAnswer++;
}

void CountWrongAnswerAndPrintRightAnswer(InfoFinalResult& Res, int CorrectResult) {
	cout << "\n___________________";
	cout << "\nWrong Answer , The Correct Answer is : " << CorrectResult;
	cout << "\n___________________" << endl << endl;
	Res.CountNumberOfWongAnswer++;
}

void ReadyToStartStart(int NumberOfQustion, InfoFinalResult Res) {
	Player P1;
	int CorrectAnswer = 0;
	PrintAndReadQustionLevelAndTypeOperation(P1, Res);
	for (int i = 1; i <= NumberOfQustion; i++) {
		cout << "\nQuestions [ " << i << "/ " << NumberOfQustion << "]" << endl; ++Res.CountNumberOfQustion;
		CorrectAnswer = ShowOperationTypeToDoCalculate2NumbersAndReturnCorrectAnswer(ReturnTheNumberAccordingToLevelQuestion(P1.ChooseQustionLevel), ReturnTheNumberAccordingToLevelQuestion(P1.ChooseQustionLevel), P1.ChooseOperationType);
		if (IsThiMathmaticalCalculationEqualYourAnswer(CorrectAnswer)) {
			CountCoorectAnswerAndPrintRightAnswer(Res);
		}
		else {
			CountWrongAnswerAndPrintRightAnswer(Res, CorrectAnswer);
		}
	}
	ShowInformationAfterEndGame(Res);

}

void ShowInformationAfterEndGame(InfoFinalResult Res) {
	cout << "\n\n__________________________________________";
	cout << "\nNumber Of Question : " << Res.CountNumberOfQustion << endl;
	cout << "\nNumber Of Right Answer : " << Res.CountNumberOfRightAnswer << endl;
	cout << "\nNumber Of Wrong Answer : " << Res.CountNumberOfWongAnswer << endl;
	cout << "\nQuestion Level Choice : " << Res.QustionLevel << endl;
	cout << "\nOperation Level Choice : " << Res.OperationTypeLevel;
	cout << "\n__________________________________________";
}

void StartMathGame() {
	char ask;
	InfoFinalResult Res;
	do {
		system("cls");
		ReadyToStartStart(ReadNumberOfQustions(), Res);
		cout << "\nDo You Want To Play Math Game Again [Y/N] ? : ";
		cin >> ask;
	} while (toupper(ask) == 'Y');
}

int main() {
	srand((unsigned)time(NULL));
	StartMathGame();
}