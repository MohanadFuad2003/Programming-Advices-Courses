#include <iostream>
#include <cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}
void FillArrayWithRandomNumber(int arr[100], int& arrlength)
{
	cout << "How many element:\n";
	cin >> arrlength;
	for (int i = 0; i <= arrlength - 1; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}


}
void PrintArray(int arr[100], int arrlength)
{
	for (int i = 0; i <= arrlength - 1; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}
int OddNumbers(int Number)
{
	if (Number % 2 != 0)
	{
		return 1;
	}
	return 0;
}
void CheckOddNumbers(int arr[100], int arrlength)
{
	int OddCount = 0;
	for (int i = 0; i <= arrlength - 1; i++)
	{
		OddCount += OddNumbers(arr[i]);

	}
	cout << "Odd Numbers count is:" << OddCount;
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrlength;
	FillArrayWithRandomNumber(arr, arrlength);
	PrintArray(arr, arrlength);
	CheckOddNumbers(arr, arrlength);
}