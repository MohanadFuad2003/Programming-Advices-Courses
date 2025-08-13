#include<iostream>
#include<cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
	int Randnum = rand() % (To - From + 1) + From;
	return Randnum;

}
void FillarrayWithRandomNumber(int arr[100], int& arrLenth)
{
	cout << "please enter number of elments = ";
	cin >> arrLenth;
	for (int i = 0; i < arrLenth; i++)
	{
		arr[i] = RandomNumber(1, 100);

	}


}
void Printelemnts(int arr[100], int arrLenth)
{
	for (int i = 0; i < arrLenth; i++)
	{
		cout << arr[i] << " ";

	}
	cout << "\n";


}
int SumNumber(int arr[100], int arrLenth)
{
	int sum = 0;
	for (int i = 0; i < arrLenth; i++)
	{

		sum += arr[i];
	}
	return sum;


}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrLenth;
	FillarrayWithRandomNumber(arr, arrLenth);
	cout << "\narray elements : ";

	Printelemnts(arr, arrLenth);
	cout << "\n sum of  number in array is = ";
	cout << SumNumber(arr, arrLenth);
	return 0;
}